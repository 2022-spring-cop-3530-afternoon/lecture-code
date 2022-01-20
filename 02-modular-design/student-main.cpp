#include <iostream>
#include <string>
#include "student.hpp"

int main ()
{
	Student s("John", "Doe", 1.8);

	Student roster[3];
	roster[0] = Student("Jane", "Doe", 1.4);
	roster[1] = Student("Ada", "Lovelace", 4.0);
	roster[2] = Student("Alan", "Turing", 3.87);

	std::cout << s << "\n";
	for (int i = 0; i < 3; ++i)
	{
		std::cout << roster[i] << "\n";
	}

	return 0;
}
