#include <doctest/doctest.h>

#include "april_2020_challenge/day_11.hpp"

TEST_CASE("april 2020 day 11 1")
{
  aka::TreeNode<>* input = new aka::TreeNode<>(
    1,
    new aka::TreeNode<>(
      2, new aka::TreeNode<>(4), new aka::TreeNode<>(5)),
    new aka::TreeNode<>(3));
  const int expected = 3;
  const auto result = april2020::diameterOfBinaryTree(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("april 2020 day 11 2")
{
  aka::TreeNode<>* input =
    new aka::TreeNode<>(1, new aka::TreeNode<>(2), nullptr);
  const int expected = 1;
  const auto result = april2020::diameterOfBinaryTree(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("april 2020 day 11 3")
{
  aka::TreeNode<>* input = nullptr;
  const int expected = 0;
  const auto result = april2020::diameterOfBinaryTree(input);
  CHECK(expected == result);
}
