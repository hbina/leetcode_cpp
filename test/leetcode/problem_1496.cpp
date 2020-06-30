#include <doctest/doctest.h>

#include "leetcode/problem_1496.hpp"

TEST_CASE("problem_1496 1")
{
  const std::string input = "NES";
  const bool expected = false;
  const bool result =
    leetcode::isPathCrossing(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem_1496 2")
{
  const std::string input = "NESWW";
  const bool expected = true;
  const bool result =
    leetcode::isPathCrossing(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem_1496 2")
{
  const std::string input = "SN";
  const bool expected = true;
  const bool result =
    leetcode::isPathCrossing(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
