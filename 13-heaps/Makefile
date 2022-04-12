CXX = g++
CXXFLAGS = -g -Wall -std=c++17

CATCH = ../catch/catch.o

test: test.cpp heap.o $(CATCH)
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@ --success