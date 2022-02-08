CXX = g++
CXXFLAGS = -g -Wall -std=c++17

CATCH = ../catch/catch.o

test: test.cpp $(CATCH) search.o
	$(CXX) $(CXXFLAGS) -o $@ $^