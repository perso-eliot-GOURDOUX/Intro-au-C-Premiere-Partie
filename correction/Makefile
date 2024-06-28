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

ex1: clean ex1.cpp
	$(CXX) $(CXXFLAGS) ex1.cpp -o ex1
	./ex1

ex2: clean ex2.cpp
	$(CXX) $(CXXFLAGS) ex2.cpp -o ex2
	./ex2

ex3: clean ex3.cpp
	$(CXX) $(CXXFLAGS) ex3.cpp -o ex3
	./ex3

ex4: clean ex4.cpp
	$(CXX) $(CXXFLAGS) ex4.cpp -o ex4
	./ex4

ex5: clean ex5.cpp
	$(CXX) $(CXXFLAGS) ex5.cpp -o ex5
	./ex5

ex6: clean ex6.cpp
	$(CXX) $(CXXFLAGS) ex6.cpp -o ex6
	./ex6

ex7: clean ex7.cpp
	$(CXX) $(CXXFLAGS) ex7.cpp -o ex7
	./ex7

ex8: clean ex8.cpp
	$(CXX) $(CXXFLAGS) ex8.cpp -o ex8
	./ex8

ex9: clean ex9.cpp
	$(CXX) $(CXXFLAGS) ex9.cpp -o ex9
	./ex9

ex10: clean ex10.cpp
	$(CXX) $(CXXFLAGS) ex10.cpp -o ex10
	./ex10

ex11: clean ex11.cpp
	$(CXX) $(CXXFLAGS) ex11.cpp -o ex11
	./ex11

clean:
	rm -f $(TARGETS)
