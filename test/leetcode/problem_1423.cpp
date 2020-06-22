#include <doctest/doctest.h>

#include "leetcode/problem_1423.hpp"

TEST_CASE("problem 1423 1")
{
  const std::vector<int> input_1 = { 1, 2, 3, 4, 5, 6, 1 };
  const int input_2 = 3;
  const int expected = 12;
  const auto result = leetcode::maxScore(input_1, input_2);
  CHECK(expected == result);
}
