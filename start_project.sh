#!/bin/bash

for i in {01..11}; do
    filename="ex${i}.cpp"
    echo "#include <iostream>" > "$filename"
    echo "" >> "$filename"
    echo "int main() {" >> "$filename"
    echo "    // Your code here" >> "$filename"
    echo "    return 0;" >> "$filename"
    echo "}" >> "$filename"
done

echo "# Makefile for compiling each exXX.cpp file independently" > Makefile
echo "" >> Makefile
echo "# Compiler options" >> Makefile
echo "CXX = g++" >> Makefile
echo "CXXFLAGS = -Wall -std=c++11  # Adjust flags as needed" >> Makefile
echo "" >> Makefile
echo "# List of source files (all .cpp files in the directory)" >> Makefile
echo 'SRCS := $(wildcard *.cpp)' >> Makefile
echo "" >> Makefile
echo "# List of executable targets (remove .cpp extension)" >> Makefile
echo 'TARGETS := $(SRCS:.cpp=)' >> Makefile
echo "" >> Makefile
echo "# Default target (all targets)" >> Makefile
echo "all: \$(TARGETS)" >> Makefile
echo "" >> Makefile
echo "re : clean all" >> Makefile
echo "" >> Makefile

for i in {01..11}; do
    echo "ex${i}: clean ex${i}.cpp" >> Makefile
    echo -e "\t\$(CXX) \$(CXXFLAGS) ex${i}.cpp -o ex${i}" >> Makefile
    echo -e "\t./ex${i}" >> Makefile
    echo "" >> Makefile
done

echo "clean:" >> Makefile
echo -e "\trm -f \$(TARGETS)" >> Makefile