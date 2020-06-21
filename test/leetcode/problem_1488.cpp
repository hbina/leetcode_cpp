#include <doctest/doctest.h>

#include "leetcode/problem_1488.hpp"

TEST_CASE("problem 1488 1")
{
  const std::vector<int> input = { 1, 2, 3, 4 };
  const std::vector<int> expected = { -1, -1, -1, -1 };
  const std::vector<int> result =
    leetcode::avoidFlood(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1488 2")
{
  const std::vector<int> input = { 1, 2, 0, 0, 2, 1 };
  const std::vector<int> expected = { -1, -1, 2, 1, -1, -1 };
  const std::vector<int> result =
    leetcode::avoidFlood(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1488 3")
{
  const std::vector<int> input = { 1, 2, 0, 1, 2 };
  const std::vector<int> expected = {};
  const std::vector<int> result =
    leetcode::avoidFlood(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1488 1")
{
  const std::vector<int> input = { 69, 0, 0, 0, 69 };
  const std::vector<int> expected = { -1, 69, 1, 1, -1 };
  const std::vector<int> result =
    leetcode::avoidFlood(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1488 1")
{
  const std::vector<int> input = { 10, 20, 20 };
  const std::vector<int> expected = {};
  const std::vector<int> result =
    leetcode::avoidFlood(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
