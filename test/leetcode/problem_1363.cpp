#include <doctest/doctest.h>

#include "leetcode/problem_1363.hpp"

TEST_CASE("problem 1363 1")
{
  const std::vector<int> input = { 8, 1, 9 };
  const std::string expected = "981";
  const std::string result =
    leetcode::largestMultipleOfThree(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1363 2")
{
  const std::vector<int> input = { 8, 6, 7, 1, 0 };
  const std::string expected = "8760";
  const std::string result =
    leetcode::largestMultipleOfThree(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1363 3")
{
  const std::vector<int> input = { 1 };
  const std::string expected = "";
  const std::string result =
    leetcode::largestMultipleOfThree(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1363 4")
{
  const std::vector<int> input = { 0, 0, 0, 0, 0, 0 };
  const std::string expected = "0";
  const std::string result =
    leetcode::largestMultipleOfThree(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1363 5")
{
  const std::vector<int> input = { 9, 8, 6, 8, 6 };
  const std::string expected = "966";
  const std::string result =
    leetcode::largestMultipleOfThree(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
