#include <doctest/doctest.h>

#include "leetcode/problem_897.hpp"

TEST_CASE("problem_897")
{
  aka::TreeNode<>* input = new aka::TreeNode<>(
    5,
    new aka::TreeNode<>(
      3,
      new aka::TreeNode<>(2, new aka::TreeNode<>(1), nullptr),
      new aka::TreeNode<>(4)),
    new aka::TreeNode<>(
      6,
      nullptr,
      new aka::TreeNode<>(
        8, new aka::TreeNode<>(7), new aka::TreeNode<>(9))));
  const aka::TreeNode<>* expected = new aka::TreeNode<>(
    1,
    nullptr,
    new aka::TreeNode<>(
      2,
      nullptr,
      new aka::TreeNode<>(
        3,
        nullptr,
        new aka::TreeNode<>(
          4,
          nullptr,
          new aka::TreeNode<>(
            5,
            nullptr,
            new aka::TreeNode<>(
              6,
              nullptr,
              new aka::TreeNode<>(
                7,
                nullptr,
                new aka::TreeNode<>(
                  8, nullptr, new aka::TreeNode<>(9)))))))));
  delete input;
  delete expected;
}
