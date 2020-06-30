#include <doctest/doctest.h>

#include "leetcode/problem_105.hpp"

TEST_CASE("problem_105")
{
  const std::vector<int> input_1 = { 3, 9, 20, 15, 7 };
  const std::vector<int> input_2 = { 9, 3, 15, 20, 7 };
  const aka::TreeNode<>* expected = new aka::TreeNode<>(
    3,
    new aka::TreeNode<>(9),
    new aka::TreeNode<>(
      20, new aka::TreeNode<>(15), new aka::TreeNode<>(7)));
  const aka::TreeNode<>* result =
    leetcode::buildTreePreIn(input_1, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}
