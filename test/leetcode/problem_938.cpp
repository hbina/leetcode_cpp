#include <doctest/doctest.h>

#include "leetcode/problem_938.hpp"

TEST_CASE("problem_938")
{
  const aka::TreeNode<>* input = new aka::TreeNode<>(
    10,
    new aka::TreeNode<>(
      5, new aka::TreeNode<>(3), new aka::TreeNode<>(7)),
    new aka::TreeNode<>(15, nullptr, new aka::TreeNode<>(18)));
  const int expected = 32;
  const int result = leetcode::rangeSumBST_recursion(input, 7, 15);
  CHECK(expected == result);
  delete input;
}
