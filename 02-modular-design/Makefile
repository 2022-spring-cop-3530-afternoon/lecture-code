CXX = g++
CXXFLAGS = -Wall -std=c++17

main: student.o student-main.cpp
	$(CXX) $(CXXFLAGS) -o main $^
	#$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) *.o main