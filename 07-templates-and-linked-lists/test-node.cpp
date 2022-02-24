#include "../catch/catch.hpp"
#include <vector>
#include "node.hpp"

TEST_CASE("Testing parameterized node")
{
	//std::vector<int> list = {1,2,3,4,5};
	Node<int> n(12);
	REQUIRE(12 == n.GetData());
}