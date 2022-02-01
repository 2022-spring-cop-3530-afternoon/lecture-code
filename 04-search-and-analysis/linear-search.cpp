#include "linear-search.hpp"

long long LinearSearch::Find (long long arr[], long long size, long long searchKey)
{
	for (long long i = 0; i < size; ++i)
	{
		if (searchKey == arr[i])
		{
			return i;
		}
	}

	return -1;
}
