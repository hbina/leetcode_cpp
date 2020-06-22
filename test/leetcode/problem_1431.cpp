#include <doctest/doctest.h>

#include "leetcode/problem_1431.hpp"

TEST_CASE("problem_1431 1")
{
  const std::vector<int> input_1 = { 2, 3, 5, 1, 3 };
  const int input_2 = 3;
  const std::vector<bool> expected = { true, true, true, false, true };
  const std::vector<bool> result = leetcode::kidsWithCandies(
    std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_1431 2")
{
  const std::vector<int> input_1 = { 4, 2, 1, 1, 2 };
  const int input_2 = 1;
  const std::vector<bool> expected = { true, false, false, false, false };
  const std::vector<bool> result = leetcode::kidsWithCandies(
    std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(expected == result);
}
