#include "student.hpp"

template <typename GradeType>
Student<GradeType>::Student(std::string name, GradeType grade): name(name), grade(grade)
{
}
