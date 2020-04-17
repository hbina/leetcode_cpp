#include "doctest/doctest.h"

#include "leetcode/problem_536.hpp"

TEST_CASE("problem_536")
{
  const akarithm::TreeNode<>* input = new akarithm::TreeNode<>(
    1,
    new akarithm::TreeNode<>(
      2, new akarithm::TreeNode<>(3), new akarithm::TreeNode<>(4)),
    new akarithm::TreeNode<>(
      2, new akarithm::TreeNode<>(4), new akarithm::TreeNode<>(3)));
  bool expected = true;
  bool result = leetcode::isSymmetric(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("problem_536")
{
  const akarithm::TreeNode<>* input = new akarithm::TreeNode<>(
    1,
    new akarithm::TreeNode<>(
      2, new akarithm::TreeNode<>(3), new akarithm::TreeNode<>(2)),
    new akarithm::TreeNode<>(
      2, new akarithm::TreeNode<>(4), new akarithm::TreeNode<>(3)));
  const bool expected = false;
  bool result = leetcode::isSymmetric(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("problem_536")
{
  const akarithm::TreeNode<>* input = new akarithm::TreeNode<>(1);
  const bool expected = true;
  bool result = leetcode::isSymmetric(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("problem_536")
{
  const akarithm::TreeNode<>* input = nullptr;
  const bool expected = true;
  bool result = leetcode::isSymmetric(input);
  CHECK(expected == result);
}
