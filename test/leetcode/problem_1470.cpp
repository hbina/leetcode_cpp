#include <doctest/doctest.h>

#include "leetcode/problem_1470.hpp"

TEST_CASE("problem 1470 1")
{
  std::vector<int> input_1 = { 2, 5, 1, 3, 4, 7 };
  const int input_2 = 3;
  std::vector<int> expected = { 2, 3, 5, 4, 1, 7 };
  std::vector<int> result =
    leetcode::shuffle(std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(expected == result);
}

TEST_CASE("problem 1470 2")
{
  std::vector<int> input_1 = { 1, 2, 3, 4, 4, 3, 2, 1 };
  const int input_2 = 4;
  std::vector<int> expected = { 1, 4, 2, 3, 3, 2, 4, 1 };
  std::vector<int> result =
    leetcode::shuffle(std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(expected == result);
}

TEST_CASE("problem 1470 3")
{
  std::vector<int> input_1 = { 1, 1, 2, 2 };
  const int input_2 = 2;
  std::vector<int> expected = { 1, 2, 1, 2 };
  std::vector<int> result =
    leetcode::shuffle(std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(expected == result);
}
