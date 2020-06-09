#include "doctest/doctest.h"

#include "leetcode/problem_39.hpp"

TEST_CASE("problem 39 1")
{
  const std::vector<int> input_1 = { 2, 3, 6, 7 };
  const int input_2 = 7;
  const auto result = leetcode::combinationSum(input_1, input_2);
  const std::vector<std::vector<int>> expected = { { 7 }, { 2, 2, 3 } };
  CHECK(expected == result);
}

TEST_CASE("problem 39 2")
{
  const std::vector<int> input_1 = { 2, 3, 6, 7 };
  const int input_2 = 7;
  const auto result = leetcode::combinationSum(input_1, input_2);
  const std::vector<std::vector<int>> expected = { { 7 }, { 2, 2, 3 } };
  CHECK(expected == result);
}
