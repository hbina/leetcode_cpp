#include <doctest/doctest.h>

#include "leetcode/problem_1409.hpp"

TEST_CASE("problem 1409 1")
{
  const std::vector<int> input_1 = { 3, 1, 2, 1 };
  const int input_2 = 5;
  const std::vector<int> expected = { 2, 1, 2, 1 };
  auto result = leetcode::processQueries(input_1, input_2);
  // CHECK(expected == result);
}
