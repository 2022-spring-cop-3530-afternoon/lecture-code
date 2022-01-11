# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS  = -g -Wall -std=c++17

main: main.cpp linear-search.o binary-search.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) main *.o
