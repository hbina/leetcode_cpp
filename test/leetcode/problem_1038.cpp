#include <doctest/doctest.h>

#include "leetcode/problem_1038.hpp"

TEST_CASE("problem_1038")
{
  aka::TreeNode<>* input = new aka::TreeNode<>(
    4,
    new aka::TreeNode<>(
      1,
      new aka::TreeNode<>(0),
      new aka::TreeNode<>(2, nullptr, new aka::TreeNode<>(3))),
    new aka::TreeNode<>(
      6,
      new aka::TreeNode<>(5),
      new aka::TreeNode<>(7, nullptr, new aka::TreeNode<>(8))));
  const aka::TreeNode<>* expected = new aka::TreeNode<>(
    30,
    new aka::TreeNode<>(
      36,
      new aka::TreeNode<>(36),
      new aka::TreeNode<>(35, nullptr, new aka::TreeNode<>(33))),
    new aka::TreeNode<>(
      21,
      new aka::TreeNode<>(26),
      new aka::TreeNode<>(15, nullptr, new aka::TreeNode<>(8))));
  const aka::TreeNode<>* result = leetcode::bstToGst(input);
  CHECK(*expected == *result);
  delete expected;
  delete result;
}

TEST_CASE("problem_1038")
{
  aka::TreeNode<double>* input = new aka::TreeNode<double>(
    4.0,
    new aka::TreeNode<double>(
      1.0,
      new aka::TreeNode<double>(0.0),
      new aka::TreeNode<double>(
        2.0, nullptr, new aka::TreeNode<double>(3.0))),
    new aka::TreeNode<double>(
      6.0,
      new aka::TreeNode<double>(5.0),
      new aka::TreeNode<double>(
        7.0, nullptr, new aka::TreeNode<double>(8.0))));
  const aka::TreeNode<double>* expected = new aka::TreeNode<double>(
    30.0,
    new aka::TreeNode<double>(
      36.0,
      new aka::TreeNode<double>(36.0),
      new aka::TreeNode<double>(
        35.0, nullptr, new aka::TreeNode<double>(33.0))),
    new aka::TreeNode<double>(
      21.0,
      new aka::TreeNode<double>(26.0),
      new aka::TreeNode<double>(
        15.0, nullptr, new aka::TreeNode<double>(8.0))));
  const aka::TreeNode<double>* result = leetcode::bstToGst(input);
  CHECK(*expected == *result);
  delete expected;
  delete result;
}
