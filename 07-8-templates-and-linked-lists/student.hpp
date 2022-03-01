#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

template <typename GradeType>
class Student
{
	private:
		std::string name;
		GradeType grade;
	public:
		Student(std::string name, GradeType grade);
};

#endif /*STUDENT_HPP*/