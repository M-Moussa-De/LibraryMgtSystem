#!/bin/bash

# Step 1: Remove all content in the build directory
echo "Cleaning build directory..."
rm -rf build/*

# Step 2: Create the build directory if it doesn't exist
mkdir -p build

# Step 3: Run cmake to configure the project inside the build directory
echo "Running cmake..."
cd build
cmake ..

# Step 4: Build the project
echo "Building the project..."
make

# Step 5: Run the tests
echo "Running tests..."
./tests/runTests