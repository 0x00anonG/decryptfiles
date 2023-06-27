#!/bin/bash

# Compile the C++ program
g++ -o decrypt decrypt.cpp

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful"
    # Run the program
    ./decrypt
else
    echo "Compilation failed"
fi
