#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

void f (int n)
{
	if (n < 0)
	{
		return;
	}
	std::cout << n;
	f(n - 1);
}

int main ()
{
	f(10);
	for (int i = 0; i < 100; ++i)
	{
		// do stuff
		for (int j = 0; j < 100; ++j)
		{
			// n^2
		}
	}
	return 0;
}