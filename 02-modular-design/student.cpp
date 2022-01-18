#include "student.hpp"

Student::Student (std::string fname, std::string lname, double gpa)
{
	this->fname = fname;
	this->lname = lname;
	this->gpa = gpa;
}

std::ostream& operator<< (std::ostream& foo, const Student& s)
{
	foo << s.lname << ", " << s.fname << ": " << s.gpa;
	return foo;
}
