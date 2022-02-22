CXX = g++
CXXFLAGS = -g -Wall -std=c++17

CATCH = ../catch/catch.o

test: test.cpp $(CATCH) utils.o 
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@

clean:
	$(RM) *.o a.out test # $(CATCH)