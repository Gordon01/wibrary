use wibrary::process;

fn main() {
    let mut slice = [1.0, 2.0, 3.0];
    let sum = 4;

    println!("Input: sum = {sum}, slice = {:?}", slice);
    process(sum, slice.as_mut_ptr(), slice.len());
    println!("Output: {:?}", slice);
}
