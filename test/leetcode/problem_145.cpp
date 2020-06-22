#include <doctest/doctest.h>

#include "leetcode/problem_145.hpp"

TEST_CASE("problem_145")
{
  const akarithm::TreeNode<>* input = new akarithm::TreeNode<>(
    1,
    nullptr,
    new akarithm::TreeNode<>(
      2, new akarithm::TreeNode<>(3, nullptr, nullptr), nullptr));
  const std::vector<int> expected = { 3, 2, 1 };
  const std::vector<int> result = leetcode::postorderTraversal(input);
  CHECK(result == expected);
  delete input;
}
