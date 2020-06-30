#include <doctest/doctest.h>

#include "leetcode/problem_145.hpp"

TEST_CASE("problem_145")
{
  const aka::TreeNode<>* input = new aka::TreeNode<>(
    1,
    nullptr,
    new aka::TreeNode<>(
      2, new aka::TreeNode<>(3, nullptr, nullptr), nullptr));
  const std::vector<int> expected = { 3, 2, 1 };
  const std::vector<int> result = leetcode::postorderTraversal(input);
  CHECK(result == expected);
  delete input;
}
