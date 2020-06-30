#include <doctest/doctest.h>

#include "leetcode/problem_33.hpp"

#include <list>
#include <vector>

TEST_CASE("problem_33 1")
{
  const std::vector<int> input_1 = { 4, 5, 6, 7, 0, 1, 2 };
  const int input_2 = 0;
  const int expected = 4;
  const int result = leetcode::search_TypeOne(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_33 2")
{
  const std::vector<int> input_1 = { 4, 5, 6, 7, 0, 1, 2 };
  const int input_2 = 3;
  const int expected = -1;
  const int result = leetcode::search_TypeOne(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_33 3")
{
  const std::list<int> input_1 = { 4, 5, 6, 7, 0, 1, 2 };
  const int input_2 = 0;
  const int expected = 4;
  const int result = leetcode::search_TypeOne(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_33 4")
{
  const std::list<int> input_1 = { 4, 5, 6, 7, 0, 1, 2 };
  const int input_2 = 3;
  const int expected = -1;
  const int result = leetcode::search_TypeOne(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_33 5")
{
  const std::vector<int> input_1;
  const int input_2 = 3;
  const int expected = -1;
  const int result = leetcode::search_TypeOne(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_33 6")
{
  const std::list<int> input_1;
  const int input_2 = 3;
  const int expected = -1;
  const int result = leetcode::search_TypeOne(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_33 7")
{
  const std::vector<int> input_1 = { 1, 3 };
  const int input_2 = 2;
  const int expected = -1;
  const int result = leetcode::search_TypeOne(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_33 8")
{
  const std::vector<int> input_1 = { 2, 3 };
  const int input_2 = 0;
  const int expected = -1;
  const int result = leetcode::search_TypeOne(input_1, input_2);
  CHECK(expected == result);
}
