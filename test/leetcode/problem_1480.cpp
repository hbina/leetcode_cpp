#include <doctest/doctest.h>

#include "leetcode/problem_1480.hpp"

TEST_CASE("problem 1480 1")
{
  const std::vector<int> input = { 1, 2, 3, 4 };
  const std::vector<int> expected = { 1, 3, 6, 10 };
  const std::vector<int> result = leetcode::runningSum(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1480 2")
{
  const std::vector<int> input = { 1, 1, 1, 1, 1 };
  const std::vector<int> expected = { 1, 2, 3, 4, 5 };
  const std::vector<int> result = leetcode::runningSum(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1480 3")
{
  const std::vector<int> input = { 3, 1, 2, 10, 1 };
  const std::vector<int> expected = { 3, 4, 6, 16, 17 };
  const std::vector<int> result = leetcode::runningSum(input);
  CHECK(expected == result);
}
