#include "doctest/doctest.h"

#include "leetcode/problem_1424.hpp"

TEST_CASE("problem 1424 1")
{
  const std::vector<std::vector<int>> input = { { 1, 2, 3 },
                                                { 4, 5, 6 },
                                                { 7, 8, 9 } };
  const std::vector<int> expected = { 1, 4, 2, 7, 5, 3, 8, 6, 9 };
  const auto result = leetcode::findDiagonalOrder(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1424 2")
{
  const std::vector<std::vector<int>> input = {
    { 1, 2, 3, 4, 5 }, { 6, 7 }, { 8 }, { 9, 10, 11 }, { 12, 13, 14, 15, 16 }
  };
  const std::vector<int> expected = { 1,  6,  2, 8,  7,  3,  9,  4,
                                      12, 10, 5, 13, 11, 14, 15, 16 };
  const auto result = leetcode::findDiagonalOrder(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1424 3")
{
  const std::vector<std::vector<int>> input = {
    { 1, 2, 3 }, { 4 }, { 5, 6, 7 }, { 8 }, { 9, 10, 11 }
  };
  const std::vector<int> expected = { 1, 4, 2, 5, 3, 8, 6, 9, 7, 10, 11 };
  const auto result = leetcode::findDiagonalOrder(input);
  CHECK(expected == result);
}

TEST_CASE("problem 1424 4")
{
  const std::vector<std::vector<int>> input = { { 1, 2, 3, 4, 5, 6 } };
  const std::vector<int> expected = { 1, 2, 3, 4, 5, 6 };
  const auto result = leetcode::findDiagonalOrder(input);
  CHECK(expected == result);
}
