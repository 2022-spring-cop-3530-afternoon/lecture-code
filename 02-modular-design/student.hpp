#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
#include <iostream>
#include <sstream>

class Student
{
	private:
		double gpa;
		std::string fname;
		std::string lname;
	public:
		Student () {}
		Student (std::string fname, std::string lname, double gpa);
	friend std::ostream& operator<< (std::ostream& foo, const Student& s);
};

#endif /*STUDENT_HPP*/