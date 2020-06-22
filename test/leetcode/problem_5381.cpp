#include <doctest/doctest.h>

#include "leetcode/problem_5381.hpp"

TEST_CASE("problem 5381 1")
{
  std::vector<int> input_1 = { 3, 1, 2, 1 };
  int input_2 = 5;
  auto result = leetcode::processQueries(input_1, input_2);
  std::vector<int> expected = { 2, 1, 2, 1 };
  CHECK(expected == result);
}
