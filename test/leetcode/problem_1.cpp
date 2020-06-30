#include <doctest/doctest.h>

#include "leetcode/problem_1.hpp"

#include "util/generic/set_equality.hpp"

TEST_CASE("problem_1 1")
{
  const std::vector<int> input_1 = { 2, 7, 11, 15 };
  const int input_2 = 9;
  const std::vector<int> expected = { 0, 1 };
  const std::vector<int> result =
    leetcode::twoSum(std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(aka::set_equality(std::cbegin(expected),
                               std::cend(expected),
                               std::cbegin(result),
                               std::cend(result)));
}

TEST_CASE("problem_1 2")
{
  const std::vector<int> input_1 = { 3, 2, 4 };
  const int input_2 = 6;
  const std::vector<int> expected = { 1, 2 };
  const std::vector<int> result =
    leetcode::twoSum(std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(aka::set_equality(std::cbegin(expected),
                               std::cend(expected),
                               std::cbegin(result),
                               std::cend(result)));
}

TEST_CASE("problem_1 3")
{
  const std::vector<int> input_1 = { 3, 3 };
  const int input_2 = 6;
  const std::vector<int> expected = { 0, 1 };
  const std::vector<int> result =
    leetcode::twoSum(std::cbegin(input_1), std::cend(input_1), input_2);
  CHECK(aka::set_equality(std::cbegin(expected),
                               std::cend(expected),
                               std::cbegin(result),
                               std::cend(result)));
}
