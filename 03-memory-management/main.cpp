#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
int a = 12; // global variable

int main ()
{
	int twelve = 12;
	std::cout << twelve << std::endl;

	int* twelvePtr = &twelve;
	std::cout << twelvePtr << std::endl;
	std::cout << *twelvePtr << std::endl;

	int six = 6;
	twelvePtr = &six;

	int& twelveAddr = twelve;
	std::cout << twelveAddr << std::endl;
	// twelveAddr = &six; // won't compile

	return 0;
}