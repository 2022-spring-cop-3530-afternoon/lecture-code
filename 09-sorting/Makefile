CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

CATCH = ../catch/catch.o

test: test.cpp insertion-sort.o $(CATCH)
	$(CXX) $(CXXFLAGS) -o $@ $^
	#./$@ --success
