#include "../catch/catch.hpp"
#include <vector>
#include "node.hpp"

TEST_CASE("Testing parameterized node")
{
	//std::vector<int> list = {1,2,3,4,5};
	Node<int> n(12);
	REQUIRE(12 == n.GetData());
	Node<int> arr[2];
}
TEST_CASE("Test linking")
{
	Node<int> n(12);
	CHECK(nullptr == n.GetNext());

	Node<int> n2(3, &n);
	REQUIRE(3 == n2.GetData());
	CHECK(&n == n2.GetNext());
	CHECK(12 == n2.GetNext()->GetData());
}