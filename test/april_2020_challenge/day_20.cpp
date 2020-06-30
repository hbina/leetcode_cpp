#include <doctest/doctest.h>

#include "april_2020_challenge/day_20.hpp"

TEST_CASE("april 2020 day 20 1")
{
  const std::vector<int> input = { 8, 5, 1, 7, 10, 12 };
  const aka::TreeNode<int>* expected = new aka::TreeNode<int>(
    8,
    new aka::TreeNode<int>(
      5, new aka::TreeNode<int>(1), new aka::TreeNode<int>(7)),
    new aka::TreeNode<int>(10, nullptr, new aka::TreeNode<int>(12)));
  const auto result = april2020::bstFromPreorder(input);
  CHECK(*expected == *result);
  delete expected;
  delete result;
}
