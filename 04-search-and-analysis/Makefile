CXX = g++
CXXFLAGS = -g -Wall -std=c++17

main: main.cpp linear-search.o binary-search.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) *.o main