#include <doctest/doctest.h>

#include "leetcode/problem_1481.hpp"

TEST_CASE("problem_1481 1")
{
  const std::vector<int> input_1 = { 5, 5, 4 };
  const int input_2 = 1;
  const int expected = 1;
  const int result = leetcode::findLeastNumOfUniqueInts(
    std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_1481 2")
{
  const std::vector<int> input_1 = { 4, 3, 1, 1, 3, 3, 2 };
  const int input_2 = 3;
  const int expected = 2;
  const int result = leetcode::findLeastNumOfUniqueInts(
    std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(expected == result);
}
