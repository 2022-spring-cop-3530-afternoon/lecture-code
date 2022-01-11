#include "binary-search.hpp"

long long BinarySearch::BinaryFind (long long arrayItems[], long long right, long long searchKey)
{
	long long left = 0;
	long long mid;

	while (right >= left)
	{
		mid = (left + right) / 2;

		if (searchKey < arrayItems[mid])
		{
			right = mid - 1;
		}
		else if (searchKey > arrayItems[mid])
		{
			left = mid + 1;
		}
		else // match
		{
			return mid;
		}
	}

	return -1;
}

long long BinarySearch::Find (long long arrayItems[], long long length, long long searchKey)
{
	return BinaryFind(arrayItems, length, searchKey);
}
