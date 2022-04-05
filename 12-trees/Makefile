CXX = g++
CXXFLAGS = -g -Wall -std=c++17

CATCH = ../catch/catch.o

test: test.cpp node.o $(CATCH)
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@ --success