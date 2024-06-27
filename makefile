# Makefile for compiling each exXX.cpp file independently

# Compiler options
CXX = g++
CXXFLAGS = -Wall -std=c++11  # Adjust flags as needed

# List of source files (all .cpp files in the directory)
SRCS := $(wildcard *.cpp)

# List of executable targets (remove .cpp extension)
TARGETS := $(SRCS:.cpp=)

# Default target (all targets)
all: $(TARGETS)

re : clean all

01: clean ex01.cpp
	$(CXX) $(CXXFLAGS) ex01.cpp -o ex01
	./ex01

02: clean ex02.cpp
	$(CXX) $(CXXFLAGS) ex02.cpp -o ex02
	./ex02

03: clean ex03.cpp
	$(CXX) $(CXXFLAGS) ex03.cpp -o ex03
	./ex03

04: clean ex04.cpp
	$(CXX) $(CXXFLAGS) ex04.cpp -o ex04
	./ex04

05: clean ex05.cpp
	$(CXX) $(CXXFLAGS) ex05.cpp -o ex05
	./ex05

06: clean ex06.cpp
	$(CXX) $(CXXFLAGS) ex06.cpp -o ex06
	./ex06

07: clean ex07.cpp
	$(CXX) $(CXXFLAGS) ex07.cpp -o ex07
	./ex07

08: clean ex08.cpp
	$(CXX) $(CXXFLAGS) ex08.cpp -o ex08
	./ex08

09: clean ex09.cpp
	$(CXX) $(CXXFLAGS) ex09.cpp -o ex09
	./ex09

10: clean ex10.cpp
	$(CXX) $(CXXFLAGS) ex10.cpp -o ex10
	./ex10

11: clean ex11.cpp
	$(CXX) $(CXXFLAGS) ex11.cpp -o ex11
	./ex11

# Clean target to remove all executables
clean:
	rm -f $(TARGETS)
