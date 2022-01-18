#include <iostream>
#include <string>
#include <sstream>

std::string PrintNumbers (int max);

int main ()
{
	std::cout << PrintNumbers(20);
	std::cout << std::endl;
// 1234567891011121314156117181920
	std::cout << 2;
	std::cout << 4;
	std::cout << 6;
	std::cout << 8;
	std::cout << 10;
	std::cout << 12;
	std::cout << 14;
	std::cout << 16;
	std::cout << 18;
	std::cout << 20;
	std::cout << std::endl;

	return 0;
}

std::string PrintNumbers (int max)
{
	std::ostringstream foo;
	for (int i = 1; i <= max; ++i)
	{
		foo << i;
	}
	return foo.str();
}
