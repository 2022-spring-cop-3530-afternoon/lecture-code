#include "insertion-sort.hpp"

void InsertionSort::Sort(std::vector<int>& input)
{
	for (std::size_t i = 1; i < input.size(); ++i)
	{
		std::size_t currentIndex = i;
 // too small for current spot
		while ( currentIndex > 0 &&
			input[currentIndex] < input[currentIndex - 1])
		{
			Swap(input[currentIndex], input[currentIndex - 1]);
			--currentIndex;
		}
	}
}
