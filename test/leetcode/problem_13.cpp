#include <doctest/doctest.h>

#include "leetcode/problem_13.hpp"

#include <array>
#include <string>
#include <vector>

TEST_CASE("problem_13 1")
{
  const std::string input = "III";
  const int expected = 3;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::string input = "IV";
  const int expected = 4;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::string input = "IX";
  const int expected = 9;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::string input = "LVIII";
  const int expected = 58;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::string input = "MCMXCIV";
  const int expected = 1994;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::string input = "MCMXCIV";
  const double expected = 1994.0;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::string input = "MCMXCIV";
  const float expected = 1994.0f;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::string input = "MCMXCIV";
  const std::size_t expected = 1994;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::vector<char> input = { 'M', 'C', 'M', 'X', 'C', 'I', 'V' };
  const float expected = 1994.0f;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::vector<char> input = { 'M', 'C', 'M', 'X', 'C', 'I', 'V' };
  const std::size_t expected = 1994;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}

TEST_CASE("problem_13")
{
  const std::array<char, 7> input = { 'M', 'C', 'M', 'X', 'C', 'I', 'V' };
  const int expected = 1994;
  CHECK(expected == leetcode::romanToInt(std::cbegin(input), std::cend(input)));
}
