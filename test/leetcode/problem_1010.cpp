#include "doctest/doctest.h"

#include "leetcode/problem_1010.hpp"

TEST_CASE("problem_1010")
{
  const std::vector<int> input = { 30, 20, 150, 100, 40 };
  const int expected = 3;
  const int result =
    leetcode::numPairsDivisibleBy60(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem_1010")
{
  const std::vector<int> input = { 60, 60, 60 };
  const int expected = 3;
  const int result =
    leetcode::numPairsDivisibleBy60(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
