#include "merge-sort.hpp"

void MergeSort::Sort (std::vector<int>& input)
{
	Sort(input, 0, input.size() - 1);
}

void MergeSort::Sort (std::vector<int>& input, std::size_t left, std::size_t right)
{
	if (left >= right)
	{
		return;
	}
	std::size_t middle = (left + right) / 2;
	Sort(input, 0, middle);
	Sort(input, middle + 1, right);
	Merge(input, left, right);
}

void MergeSort::Merge (std::vector<int>& sortedOutput, std::size_t left, std::size_t right)
{
	std::size_t middle = (left + right) / 2;
	std::vector<int> input = sortedOutput;

}