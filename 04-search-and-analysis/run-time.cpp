
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

int main ()
{
	int n = 1000;
	// O(n)
	for (int i = 0; i < n; ++i)
	{
		// do constant time stuff
	}

	// O(n^2)
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			// do constant time stuff
		}
	}

	// O(?)
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// do constant time stuff
		}
	}

	return 0;
}