#[no_mangle]
pub extern "C" fn process(sum: u8, data: *mut f32, size: usize) -> i32 {
    if size > 100 {
        return -1;
    }

    for i in 0..size {
        unsafe {
            *data.offset(i as isize) += sum as f32;
        }
    }

    0
}
