#include <doctest/doctest.h>

#include "leetcode/problem_1422.hpp"

TEST_CASE("problem_14221")
{
  const std::string input = "011101";
  const int expected = 5;
  const auto result = leetcode::maxScore(input);
  CHECK(expected == result);
}

TEST_CASE("problem_14222")
{
  const std::string input = "00";
  const int expected = 1;
  const auto result = leetcode::maxScore(input);
  CHECK(expected == result);
}
