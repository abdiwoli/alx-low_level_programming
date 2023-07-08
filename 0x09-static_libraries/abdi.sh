#!/bin/bash

# Compile each .c file into a corresponding .o file
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library
ar rcs  libmy.a *.o

# Clean up by removing the .o files
rm *.o
