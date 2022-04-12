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
}