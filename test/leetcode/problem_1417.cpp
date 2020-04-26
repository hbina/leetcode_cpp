#include "doctest/doctest.h"

#include "leetcode/problem_1417.hpp"

#include <vector>

TEST_CASE("problem 1417 1")
{
  const std::string input = "a0b1c2";
  const std::string expected = "0a1b2c";
  const std::string result =
    leetcode::reformat(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1417 2")
{
  const std::string input = "leetcode";
  const std::string expected = "";
  const std::string result =
    leetcode::reformat(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1417 3")
{
  const std::string input = "123123213";
  const std::string expected = "";
  const std::string result =
    leetcode::reformat(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1417 4")
{
  const std::string input = "covid2019";
  const std::string expected = "c2o0v1i9d";
  const std::string result =
    leetcode::reformat(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1417 5")
{
  const std::string input = "j";
  const std::string expected = "j";
  const std::string result =
    leetcode::reformat(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem 1417 6")
{
  const std::string input = "2";
  const std::string expected = "2";
  const std::string result =
    leetcode::reformat(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
