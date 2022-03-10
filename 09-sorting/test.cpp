#include "../catch/catch.o"
#include <vector>

TEST_CASE("On^2 algs")
{
    std::vector<int> unsorted = { -4, 23, 54, 74, 35, -12, 2, 3565, 27, 535, 12, 0};
    std::vector<int> sorted = { -12, -4, 0, 2, 12, 23, 27, 35, 54, 74, 535, 3565 };

    SECTION("Insertion sort")
    {
        InsertionSort::Sort(unsorted);
        CHECK(sorted == unsorted);
    }
}
