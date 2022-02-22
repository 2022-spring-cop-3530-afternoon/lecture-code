#include "../catch/catch.hpp"
#include <vector>
#include "utils.hpp"

TEST_CASE("Testing utilities")
{
	int a = 12;
	int b = 3;
	Swap(a, b);

	CHECK(3 == a);
	CHECK(12 == b);

	double c = 12.5;
	double d = 23.6;
	Swap(c, d);
	CHECK(23.6 == c);
}