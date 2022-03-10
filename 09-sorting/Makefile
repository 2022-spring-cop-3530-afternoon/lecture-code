CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

CATCH = ../catch/catch.o

test: test.cpp insertion-sort.o $(CATCH) ../07-8-templates-and-linked-lists/utils.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@ --success
