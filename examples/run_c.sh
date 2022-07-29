C_BIN=./wbin_c

if [ -f "$C_BIN" ]; then
    LD_LIBRARY_PATH=../target/debug $C_BIN
else 
    echo "$C_BIN does not exist. Build the binary first."
fi
