#include <doctest/doctest.h>

#include "leetcode/problem_536.hpp"

TEST_CASE("problem_536")
{
  const aka::TreeNode<>* input = new aka::TreeNode<>(
    1,
    new aka::TreeNode<>(
      2, new aka::TreeNode<>(3), new aka::TreeNode<>(4)),
    new aka::TreeNode<>(
      2, new aka::TreeNode<>(4), new aka::TreeNode<>(3)));
  bool expected = true;
  bool result = leetcode::isSymmetric(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("problem_536")
{
  const aka::TreeNode<>* input = new aka::TreeNode<>(
    1,
    new aka::TreeNode<>(
      2, new aka::TreeNode<>(3), new aka::TreeNode<>(2)),
    new aka::TreeNode<>(
      2, new aka::TreeNode<>(4), new aka::TreeNode<>(3)));
  const bool expected = false;
  bool result = leetcode::isSymmetric(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("problem_536")
{
  const aka::TreeNode<>* input = new aka::TreeNode<>(1);
  const bool expected = true;
  bool result = leetcode::isSymmetric(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("problem_536")
{
  const aka::TreeNode<>* input = nullptr;
  const bool expected = true;
  bool result = leetcode::isSymmetric(input);
  CHECK(expected == result);
}
