#include "../catch/catch.hpp"
#include <vector>
#include "node.hpp"
#include "list.hpp"

TEST_CASE("Testing Default list")
{
	List<int> l;
	REQUIRE(nullptr == l.GetFront());
	l.InsertAtFront(4);

	CHECK(4 == l.GetFront()->GetData());
}