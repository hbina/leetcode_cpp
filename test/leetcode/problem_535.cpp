#include <doctest/doctest.h>

#include "leetcode/problem_535.hpp"

TEST_CASE("problem_535")
{
  const aka::TreeNode<> input = aka::TreeNode<>(
    3,
    new aka::TreeNode<>(9),
    new aka::TreeNode<>(
      20, new aka::TreeNode<>(15), new aka::TreeNode<>(7)));
  int expected = 3;
  CHECK(expected == leetcode::maxDepth(&input));
}

TEST_CASE("problem_535")
{
  const aka::TreeNode<> input = aka::TreeNode<>(3);
  int expected = 1;
  CHECK(expected == leetcode::maxDepth(&input));
}

TEST_CASE("problem_535")
{
  aka::TreeNode<>* input = nullptr;
  int expected = 0;
  CHECK(expected == leetcode::maxDepth(input));
}

TEST_CASE("problem_535")
{
  const aka::TreeNode<>* input = new aka::TreeNode<>(
    3,
    nullptr,
    new aka::TreeNode<>(
      20,
      nullptr,
      new aka::TreeNode<>(7, nullptr, new aka::TreeNode<>(7))));
  const int expected = 4;
  const int result = static_cast<int>(leetcode::maxDepth(input));
  CHECK(expected == result);
  delete input;
}
