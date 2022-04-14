#include "../catch/catch.hpp"
#include "heap.hpp"

TEST_CASE ("Emulated pointers")
{
	Heap h;
	REQUIRE(1 == h.GetParent(4));
	REQUIRE(0 == h.GetParent(2));
	REQUIRE(0 == h.GetParent(1));
	REQUIRE(-1 == h.GetParent(0));
	REQUIRE(-1 == h.GetParent(-5));

	REQUIRE(3 == h.GetLeft(1));
	REQUIRE(4 == h.GetRight(1));
}

TEST_CASE("Build heap")
{
	Heap h;
	h.Insert(12);
	CHECK(12 == h.Peek());

	h.Insert(14);
	CHECK(14 == h.Peek());

	h.Insert(4);
	CHECK(14 == h.Peek());

	CHECK(14 == h.Pop());
}