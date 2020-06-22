#include <doctest/doctest.h>

#include "leetcode/problem_1365.hpp"

TEST_CASE("problem_1365 1")
{
  const std::vector<int> input = { 8, 1, 2, 2, 3 };
  const std::vector<int> expected = { 4, 0, 1, 1, 3 };
  const std::vector<int> result =
    leetcode::smallerNumbersThanCurrent(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem_1365 2")
{
  const std::vector<int> input = { 6, 5, 4, 8 };
  const std::vector<int> expected = { 2, 1, 0, 3 };
  const std::vector<int> result =
    leetcode::smallerNumbersThanCurrent(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem_1365 3")
{
  const std::vector<int> input = { 7, 7, 7, 7 };
  const std::vector<int> expected = { 0, 0, 0, 0 };
  const std::vector<int> result =
    leetcode::smallerNumbersThanCurrent(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
