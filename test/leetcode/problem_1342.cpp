#include <doctest/doctest.h>

#include "leetcode/problem_1342.hpp"

TEST_CASE("problem 1342 1")
{
  const int input = 14;
  const int expected = 6;
  const int result = leetcode::numberOfSteps(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1342 2")
{
  const int input = 8;
  const int expected = 4;
  const int result = leetcode::numberOfSteps(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1342 3")
{
  const int input = 123;
  const int expected = 12;
  const int result = leetcode::numberOfSteps(input);
  CHECK(expected == result);
}
