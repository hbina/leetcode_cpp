#include "doctest/doctest.h"

#include "leetcode/problem_535.hpp"

TEST_CASE("problem_535") {
  const akarithm::TreeNode<> input = akarithm::TreeNode<>(
      3, new akarithm::TreeNode<>(9),
      new akarithm::TreeNode<>(20, new akarithm::TreeNode<>(15),
                               new akarithm::TreeNode<>(7)));
  int expected = 3;
  CHECK(expected == leetcode::maxDepth(&input));
}

TEST_CASE("problem_535") {
  const akarithm::TreeNode<> input = akarithm::TreeNode<>(3);
  int expected = 1;
  CHECK(expected == leetcode::maxDepth(&input));
}

TEST_CASE("problem_535") {
  akarithm::TreeNode<> *input = nullptr;
  int expected = 0;
  CHECK(expected == leetcode::maxDepth(input));
}

TEST_CASE("problem_535") {
  const akarithm::TreeNode<> *input = new akarithm::TreeNode<>(
      3, nullptr,
      new akarithm::TreeNode<>(
          20, nullptr,
          new akarithm::TreeNode<>(7, nullptr, new akarithm::TreeNode<>(7))));
  const int expected = 4;
  const int result = static_cast<int>(leetcode::maxDepth(input));
  CHECK(expected == result);
  delete input;
}
