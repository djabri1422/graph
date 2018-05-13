#include <catch.hpp>

#include "graph.hpp"

TEST_CASE("init vortex")
{
  Graph A;
  
  std::vector<vector<int>> B = {{ 0, 1, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 0, 0, 0 },
	{ 1, 1, 0, 0, 0, 0, 0 },
	{ 0, 1, 0, 0, 1, 0, 0 },
	{ 0, 0, 0, 1, 0, 1, 0 },
	{ 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0 }};
  
  REQUIRE(A = B);
  
}
