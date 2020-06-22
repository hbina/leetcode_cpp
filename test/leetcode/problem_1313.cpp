#include <doctest/doctest.h>

#include "leetcode/problem_1313.hpp"

TEST_CASE("problem_1313 1")
{
  const std::vector<int> input = { 1, 2, 3, 4 };
  const std::vector<int> expected = { 2, 4, 4, 4 };
  const std::vector<int> result =
    leetcode::decompressRLElist(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
