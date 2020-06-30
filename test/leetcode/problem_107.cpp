#include <doctest/doctest.h>

#include "leetcode/problem_107.hpp"

TEST_CASE("problem_107")
{
  const aka::TreeNode<>* input = new aka::TreeNode<>(
    3,
    new aka::TreeNode<>(9),
    new aka::TreeNode<>(
      20, new aka::TreeNode<>(15), new aka::TreeNode<>(7)));
  const std::vector<std::vector<int>> expected = { { 3 },
                                                   { 9, 20 },
                                                   { 15, 7 } };
  const std::vector<std::vector<int>> result =
    leetcode::levelOrderBottom(input);
  CHECK(expected == result);
  delete input;
}
