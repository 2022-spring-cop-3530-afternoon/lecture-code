#include "../catch/catch.hpp"
#include "node.hpp"

TEST_CASE("Node test")
{
	Node<int> n(12);
	CHECK(12 == n.GetData());

	CHECK(nullptr == n.GetLeft());
	CHECK(nullptr == n.GetRight());
}