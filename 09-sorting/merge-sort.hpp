#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP
#include <vector>

class MergeSort
{
	public:
		static void Sort (std::vector<int>& input);

	private:
		static void Sort (std::vector<int>& input, std::size_t left, std::size_t right);
		static void Merge (std::vector<int>& input, std::size_t left, std::size_t right);
};

#endif /*MERGE_SORT_HPP*/
