#include "doctest/doctest.h"

#include "leetcode/problem_394.hpp"

TEST_CASE("problem_394 1")
{
  const std::string input = "3[a]2[bc]";
  const std::string expected = "aaabcbc";
  const std::string result =
    leetcode::decodeString(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("problem_394 2")
{
  const std::string input = "2[abc]3[cd]ef";
  const std::string expected = "abcabccdcdcdef";
  const std::string result =
    leetcode::decodeString(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
