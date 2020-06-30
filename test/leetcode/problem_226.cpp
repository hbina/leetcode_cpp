#include <doctest/doctest.h>

#include "leetcode/problem_226.hpp"

TEST_CASE("problem__226")
{
  aka::TreeNode<>* input = new aka::TreeNode<>(
    4,
    new aka::TreeNode<>(
      2, new aka::TreeNode<>(1), new aka::TreeNode<>(3)),
    new aka::TreeNode<>(
      7, new aka::TreeNode<>(6), new aka::TreeNode<>(9)));
  const aka::TreeNode<int>* expected = new aka::TreeNode<>(
    4,
    new aka::TreeNode<>(
      7, new aka::TreeNode<>(9), new aka::TreeNode<>(6)),
    new aka::TreeNode<>(
      2, new aka::TreeNode<>(3), new aka::TreeNode<>(1)));
  const aka::TreeNode<>* result = leetcode::invertTree(input);
  CHECK(*expected == *result);
  delete expected;
  delete result;
}
