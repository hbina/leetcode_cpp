#include "doctest/doctest.h"

#include "leetcode/problem_1417.hpp"

#include <vector>

TEST_CASE("problem 1346 1")
{
  const std::string input = "a0b1c2";
  const std::string expected = "0a1b2c";
  const std::string result = leetcode::reformat(input);
  // CHECK(expected == result);
}
