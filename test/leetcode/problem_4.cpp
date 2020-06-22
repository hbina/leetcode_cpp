#include <doctest/doctest.h>

#include "leetcode/problem_4.hpp"

TEST_CASE("problem_4")
{
  const std::vector<int> input_1 = { 1, 3 };
  const std::vector<int> input_2 = { 2 };
  CHECK(2.0 == leetcode::findMedianSortedArrays_basic(std::cbegin(input_1),
                                                      std::cend(input_1),
                                                      std::cbegin(input_2),
                                                      std::cend(input_2)));
}

TEST_CASE("problem_4")
{
  const std::vector<int> input_1 = { 1, 2 };
  const std::vector<int> input_2 = { 3, 4 };
  CHECK(2.5 == leetcode::findMedianSortedArrays_basic(std::cbegin(input_1),
                                                      std::cend(input_1),
                                                      std::cbegin(input_2),
                                                      std::cend(input_2)));
}
