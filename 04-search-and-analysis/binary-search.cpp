#include "binary-search.hpp"

long long BinarySearch::Find (long long arr[], long long size, long long searchKey)
{
	long long middle;
	long long left = 0;
	long long right = size - 1;

	while (left <= right)
	{
		middle = (left + right) / 2;
		if (arr[middle] == searchKey)
		{
			return middle;
		}
		else if (arr[middle] < searchKey)
		{
			left = middle + 1;
		}
		else // left half
		{
			right = middle - 1;
		}
	}

	return -1;
}
