A Rust library that compiles into a shared object and dynamically links to a C binary.

# Build
C examples are only for Linux, but can be cross-compiled with a little more effort.

```sh
rustup target add x86_64-unknown-linux-gnu
cargo build --target x86_64-unknown-linux-gnu
```

# Example of using C FFI
Examples are in `examples` directory. To build them, run `./build_c.sh`

# Run
Run `./run_c.sh` in the `examples` directory.

# Easy way to run on Windows
Instead of cross compiling, you can just use WSL:
```
PS wibrary> cargo build
PS wibrary> cd .\examples\
PS wibrary\examples> wsl .\build_c.sh
/bin/bash: .build_c.sh: command not found
PS wibrary\examples> wsl ./build_c.sh
PS wibrary\examples> wsl ./run_c.sh  
Input: sum = 5, data = {1.000000, 2.000000, 3.000000}
Output: data = {6.000000, 7.000000, 8.000000}
```