#include "search.hpp"

int Search::Binary(std::vector<int> data, int searchKey)
{
	return Search::Binary(data, searchKey, 0, data.size() - 1);
}

int Search::Binary(std::vector<int> data, int searchKey, int left, int right)
{
	int middle = (left + right) / 2;

	if (data[middle] == searchKey) // found it
	{
		return middle;
	}
	else if (right < left) // nowhere left to look
	{
		return -1;
	}
	else if (data[middle] < searchKey) // smaller that searchKey
	{
		// move left to middle
		return Search::Binary(data, searchKey, middle, right);
	}
	else // larger
	{
		right = middle;
		return Search::Binary(data, searchKey, left, right);
	}
}
