CXX = g++
CXXFLAGS = -g -Wall -std=c++17

CATCH = ../catch/catch.o
test: test.cpp $(CATCH) graph.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@ --success