#include <doctest/doctest.h>

#include "leetcode/problem_1339.hpp"

TEST_CASE("problem_5330 1")
{
  const aka::TreeNode<>* input = new aka::TreeNode<>(
    1,
    nullptr,
    new aka::TreeNode<>(
      2,
      new aka::TreeNode<>(3),
      new aka::TreeNode<>(
        4, new aka::TreeNode(5), new aka::TreeNode<>(6))));
  const int expected = 90;
  // const int result = leetcode::maxProduct(input);
  // CHECK(expected == result);
  delete input;
}
