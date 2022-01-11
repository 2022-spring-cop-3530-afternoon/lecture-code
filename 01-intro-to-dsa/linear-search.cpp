#include "linear-search.hpp"

long long LinearSearch::Find (long long arrayItems[], long long length, long long searchKey)
{
	long long foundIndex = -1;

	for (long long i = 0; i < length; ++i)
	{
		if (arrayItems[i] == searchKey)
		{
			foundIndex = i;
			break;
		}
	}

	return foundIndex;
}
