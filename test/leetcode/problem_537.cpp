#include <doctest/doctest.h>

#include "leetcode/problem_537.hpp"

TEST_CASE("problem_537")
{
  const aka::TreeNode<>* input_1 = new aka::TreeNode<>(
    5,
    new aka::TreeNode<>(
      4,
      new aka::TreeNode<>(
        11, new aka::TreeNode<>(7), new aka::TreeNode<>(2)),
      nullptr),
    new aka::TreeNode<>(
      8,
      new aka::TreeNode<>(13),
      new aka::TreeNode<>(4, nullptr, new aka::TreeNode<>(1))));
  const int input_2 = 22;
  const bool expected = true;
  const bool result = leetcode::hasPathSum(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_537")
{
  const aka::TreeNode<>* input_1 = nullptr;
  const int input_2 = 1;
  const bool expected = false;
  const bool result = leetcode::hasPathSum(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_537 -- [1], 0 ==> false")
{
  const aka::TreeNode<>* input_1 = new aka::TreeNode<>(1);
  const int input_2 = 0;
  const bool expected = false;
  const bool result = leetcode::hasPathSum(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_537 -- [1,2], 1 ==> true")
{
  const aka::TreeNode<>* input_1 =
    new aka::TreeNode<>(1, new aka::TreeNode<>(2), nullptr);
  const int input_2 = 1;
  const bool expected = false;
  const bool result = leetcode::hasPathSum(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_537 -- [-2,null, -3], -5 ==> true")
{
  const aka::TreeNode<>* input_1 =
    new aka::TreeNode<>(-2, nullptr, new aka::TreeNode<>(-3));
  const int input_2 = -5;
  const bool expected = true;
  const bool result = leetcode::hasPathSum(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}
