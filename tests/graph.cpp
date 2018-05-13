#include <catch.hpp>

#include "graph.hpp"

TEST_CASE("init vortex")
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

TEST_CASE("sreach")
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
	A.search(0, 7);
	REQUIRE( A.get_Vortex()[6] == 1 );
}
