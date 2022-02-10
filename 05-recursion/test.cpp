#include "../catch/catch.hpp"
#include <vector>
#include "search.hpp"

TEST_CASE("Search for values")
{
	std::vector<int> data = {-4, 0, 1, 1, 4, 5, 6, 17, 22, 34, 57, 99, 123, 2435};

	CHECK(3 == Search::Binary(data, 1)); // 1st occurrence at index 2
	CHECK(0 == Search::Binary(data, -4)); // 1st occurrence at index 2
}