#include <catch.hpp>

#include "graph.hpp"

TEST_CASE("initialz vortex")
{
	Graph A;
	
	vector B = {{ 0, 1, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 0, 0, 0 },
	{ 1, 1, 0, 0, 0, 0, 0 },
	{ 0, 1, 0, 0, 1, 0, 0 },
	{ 0, 0, 0, 1, 0, 1, 0 },
	{ 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0 }};	

	A.getMass(B);
	
	REQUIRE( A.retMass().size() == 7 );
}
