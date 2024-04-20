use std::ffi::{CStr, CString};
use std::ptr::null;

use tree_sitter::ffi::*;
use tree_sitter_pyexpander as ts_px;
use tree_sitter_python as ts_py;

unsafe fn test_ts(mut text: String) {
    let parser = ts_parser_new();
    let py = ts_py::language().into_raw();
    let px = ts_px::language().into_raw();
    ts_parser_set_language(parser, px);

    let len = text.len() as u32;

    // we don't include the null byte in the len, hence why we add it afterward
    text.push('\0');

    let txt = CString::from_vec_with_nul(text.into_bytes()).unwrap();
    let txt = txt.as_ptr();

    let px_tree = ts_parser_parse_string(parser, null(), txt, len);
    let pyexpander_root_node = ts_tree_root_node(px_tree);

    let mut txt_ranges: Vec<TSRange> = Vec::with_capacity(10);
    let mut python_ranges: Vec<TSRange> = Vec::with_capacity(10);
    let child_count: u32 = ts_node_child_count(pyexpander_root_node);

    for i in 0..child_count {
        let node = ts_node_child(pyexpander_root_node, i);

        let node_type = CStr::from_ptr(ts_node_type(node));

        match node_type.to_str().unwrap() {
            "text" => {
                txt_ranges.push(TSRange {
                    start_point: ts_node_start_point(node),
                    end_point: ts_node_end_point(node),
                    start_byte: ts_node_start_byte(node),
                    end_byte: ts_node_end_byte(node),
                });
            }
            "code" => {
                python_ranges.push(TSRange {
                    start_point: ts_node_start_point(node),
                    end_point: ts_node_end_point(node),
                    start_byte: ts_node_start_byte(node),
                    end_byte: ts_node_end_byte(node),
                });
            }
            _ => {
                // nothing
            }
        }
    }

    ts_parser_set_language(parser, py);
    ts_parser_set_included_ranges(parser, python_ranges.as_ptr(), python_ranges.len() as u32);
    let python_tree = ts_parser_parse_string(parser, null(), txt, len);
    let python_root_node = ts_tree_root_node(python_tree);

    let pyexpander_sexp = CStr::from_ptr(ts_node_string(pyexpander_root_node));
    let python_sexp = CStr::from_ptr(ts_node_string(python_root_node));
    println!("Python: {}", python_sexp.to_str().unwrap());
    println!("Pyexpander: {}", pyexpander_sexp.to_str().unwrap());
}

fn main() {
    let file = std::env::args().nth(1).expect("No file to parse.");
    let text = std::fs::read_to_string(file).expect("Could not read file");

    unsafe {
        test_ts(text);
    }
}
