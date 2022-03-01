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

	// two below are equivalent
	CHECK((23.61 > c && 23.59 < c));
	CHECK(Approx(23.6) == c); // Catch2 specific

	CHECK(12.5 == d);
}

TEST_CASE("Test max")
{
	int a[] = {12, 34, -12, 0, 43, 99, 3};
	REQUIRE(99 == Max(a, 7 /* elements in the array */));


	Student roster[4];


	REQUIRE(studentA == Max(roster, 4);


}