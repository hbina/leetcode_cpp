#include "doctest/doctest.h"

#include "leetcode/problem_43.hpp"

TEST_CASE("problem 43 1")
{
  const std::string input_1 = "2";
  const std::string input_2 = "3";
  const std::string expected = "6";
  const auto result = leetcode::multiply(std::crbegin(input_1),
                                         std::crend(input_1),
                                         std::crbegin(input_2),
                                         std::crend(input_2));
  CHECK(expected == result);
}

TEST_CASE("problem 43 1")
{
  const std::string input_1 = "123";
  const std::string input_2 = "456";
  const std::string expected = "56088";
  const auto result = leetcode::multiply(std::crbegin(input_1),
                                         std::crend(input_1),
                                         std::crbegin(input_2),
                                         std::crend(input_2));
  CHECK(expected == result);
}
