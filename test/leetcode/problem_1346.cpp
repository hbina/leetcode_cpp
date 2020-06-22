#include <doctest/doctest.h>

#include "leetcode/problem_1346.hpp"

#include <vector>

TEST_CASE("problem_1346 1")
{
  const std::vector<int> input = { 10, 2, 5, 3 };
  const bool expected = true;
  const bool result = leetcode::checkIfExist(input);
  CHECK(expected == result);
}

TEST_CASE("problem_1346 2")
{
  const std::vector<int> input = { -20, 8, -6, -14, 0, -19, 14, 4 };
  const bool expected = true;
  const bool result = leetcode::checkIfExist(input);
  CHECK(expected == result);
}

TEST_CASE("problem_1346 3")
{
  const std::vector<int> input = { -10, 12, -20, -8, 15 };
  const bool expected = true;
  const bool result = leetcode::checkIfExist(input);
  CHECK(expected == result);
}
