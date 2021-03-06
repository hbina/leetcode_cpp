#include <doctest/doctest.h>

#include "leetcode/problem_28.hpp"

#include <string>
#include <vector>

TEST_CASE("problem_28 1")
{
  const std::string input_1 = "hello";
  const std::string input_2 = "ll";
  const int expected = 2;
  const int result = leetcode::strStr(std::cbegin(input_1),
                                      std::cend(input_1),
                                      std::cbegin(input_2),
                                      std::cend(input_2));
  CHECK(expected == result);
}

TEST_CASE("problem_28 2")
{
  const std::string input_1 = "aaaaa";
  const std::string input_2 = "bba";
  const int expected = -1;
  const int result = leetcode::strStr(std::cbegin(input_1),
                                      std::cend(input_1),
                                      std::cbegin(input_2),
                                      std::cend(input_2));
  CHECK(expected == result);
}

TEST_CASE("problem_28 3")
{
  const std::string input_1 = "";
  const std::string input_2 = "";
  const int expected = 0;
  const int result = leetcode::strStr(std::cbegin(input_1),
                                      std::cend(input_1),
                                      std::cbegin(input_2),
                                      std::cend(input_2));
  CHECK(expected == result);
}

TEST_CASE("problem_28 4")
{
  const std::string input_1 = "aaaaa";
  const std::string input_2 = "";
  const int expected = 0;
  const int result = leetcode::strStr(std::cbegin(input_1),
                                      std::cend(input_1),
                                      std::cbegin(input_2),
                                      std::cend(input_2));
  CHECK(expected == result);
}
