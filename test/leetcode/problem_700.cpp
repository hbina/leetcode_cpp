#include <doctest/doctest.h>

#include "leetcode/problem_700.hpp"

TEST_CASE("problem_700")
{
  aka::TreeNode<>* expected = new aka::TreeNode<>(
    2, new aka::TreeNode<>(1), new aka::TreeNode<>(3));
  const aka::TreeNode<>* input =
    new aka::TreeNode<>(4, expected, new aka::TreeNode<>(7));
  const auto result = leetcode::searchBST(input, 2);
  CHECK(expected == result);
  delete input;
}
