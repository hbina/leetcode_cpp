#include <doctest/doctest.h>

#include "leetcode/problem_653.hpp"

TEST_CASE("problem_653 1")
{
  const aka::TreeNode<>* input_1 = new aka::TreeNode<>(
    5,
    new aka::TreeNode<>(
      3, new aka::TreeNode<>(2), new aka::TreeNode<>(4)),
    new aka::TreeNode<>(6, nullptr, new aka::TreeNode<>(7)));
  const int input_2 = 9;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 2")
{
  const aka::TreeNode<>* input_1 = new aka::TreeNode<>(
    2, new aka::TreeNode<>(1), new aka::TreeNode<>(3));
  const int input_2 = 3;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 3")
{
  const aka::TreeNode<>* input_1 =
    new aka::TreeNode<>(2, nullptr, new aka::TreeNode<>(1));
  const int input_2 = 3;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 4")
{
  const aka::TreeNode<>* input_1 =
    new aka::TreeNode<>(2, new aka::TreeNode<>(1), nullptr);
  const int input_2 = 3;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 5")
{
  const aka::TreeNode<>* input_1 = nullptr;
  const int input_2 = 3;
  const bool expected = false;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 6")
{
  const aka::TreeNode<>* input_1 = new aka::TreeNode<>(2);
  const int input_2 = 3;
  const bool expected = false;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 7")
{
  const aka::TreeNode<>* input_1 = new aka::TreeNode<>(
    0,
    new aka::TreeNode<>(-1, new aka::TreeNode<>(-3), nullptr),
    new aka::TreeNode<>(2, nullptr, new aka::TreeNode<>(4)));
  const int input_2 = -4;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 8")
{
  const aka::TreeNode<>* input_1 = new aka::TreeNode<>(1);
  const int input_2 = 2;
  const bool expected = false;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}
