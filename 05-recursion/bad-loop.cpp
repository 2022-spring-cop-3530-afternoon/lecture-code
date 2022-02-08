
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

int main ()
{
	int i = 0;
	while (true)
	{
		std::cout << i++;
		break; // without it runs forever
	}
	return 0;
}