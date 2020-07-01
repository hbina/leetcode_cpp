#include <doctest/doctest.h>

#include "leetcode/problem_1498.hpp"

#include <vector>

TEST_CASE("problem_1498 1")
{
  const std::vector<int> input_1 = { 3, 5, 6, 7 };
  const int input_2 = 9;
  const int expected = 4;
  const int result =
    leetcode::numSubseq(std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(expected == result);
}
