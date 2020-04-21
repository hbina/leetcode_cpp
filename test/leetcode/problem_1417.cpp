#include "doctest/doctest.h"

#include "leetcode/problem_1417.hpp"

#include <vector>

TEST_CASE("problem 1346 1")
{
  const std::string input = "a0b1c2";
  const std::string expected = "0a1b2c";
  const std::string result = leetcode::reformat(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1346 2")
{
  const std::string input = "leetcode";
  const std::string expected = "";
  const std::string result = leetcode::reformat(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1346 3")
{
  const std::string input = "123123213";
  const std::string expected = "";
  const std::string result = leetcode::reformat(input);
  CHECK(expected == result);
}


TEST_CASE("problem 1346 4")
{
  const std::string input = "covid2019";
  const std::string expected = "2c0o1v9id";
  const std::string result = leetcode::reformat(input);
  CHECK(expected == result);
}
