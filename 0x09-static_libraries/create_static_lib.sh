#!/bin/bash

# Create a list of all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile each .c file into an object file and add it to the static library
for file in $c_files; do
  gcc -c "$file" -o "${file%.c}.o"
  ar rcs liball.a "${file%.c}.o"
done

# Clean up: remove the temporary object files
rm -f *.o

echo "Static library liball.a created from .c files in the current directory."

