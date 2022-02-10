#ifndef SEARCH_HPP
#define SEARCH_HPP
#include <vector>

class Search
{
	private:
		static int Binary(std::vector<int> data, int searchKey, int left, int right);

	public:
		static int Binary(std::vector<int> data, int searchKey);
};

#endif /*SEARCH_HPP*/