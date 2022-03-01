#include "../catch/catch.hpp"
#include <vector>
#include "node.hpp"
#include "list.hpp"

TEST_CASE("Testing Default list")
{
	List<int> l;
	CHECK("" == l.Traverse());
	REQUIRE(nullptr == l.GetFront());

	l.InsertAtFront(4);
	CHECK(4 == l.GetFront()->GetData());
	CHECK("4" == l.Traverse());

	l.InsertAtFront(3);
	CHECK(3 == l.GetFront()->GetData());
	CHECK(4 == l.GetFront()->GetNext()->GetData());

	CHECK("3 -> 4" == l.Traverse());
}