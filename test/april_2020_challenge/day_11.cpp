#include "doctest/doctest.h"

#include "april_2020_challenge/day_11.hpp"

TEST_CASE("april 2020 day 11 1")
{
  akarithm::TreeNode<>* input = new akarithm::TreeNode<>(
    1,
    new akarithm::TreeNode<>(
      2, new akarithm::TreeNode<>(4), new akarithm::TreeNode<>(5)),
    new akarithm::TreeNode<>(3));
  const int expected = 3;
  const auto result = april2020::diameterOfBinaryTree(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("april 2020 day 11 2")
{
  akarithm::TreeNode<>* input =
    new akarithm::TreeNode<>(1, new akarithm::TreeNode<>(2), nullptr);
  const int expected = 1;
  const auto result = april2020::diameterOfBinaryTree(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("april 2020 day 11 3")
{
  akarithm::TreeNode<>* input = nullptr;
  const int expected = 0;
  const auto result = april2020::diameterOfBinaryTree(input);
  CHECK(expected == result);
}
