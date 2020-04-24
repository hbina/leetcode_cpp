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
}
