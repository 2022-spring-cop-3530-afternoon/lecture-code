#include "../catch/catch.hpp"
#include "graph.hpp"

TEST_CASE("Adjacency Matrix")
{
	Graph g(10);
	// the two below are the same check
	REQUIRE(!g.HasAdjacency(0, 1));
	REQUIRE(g.HasAdjacency(0, 1) == false);

}
