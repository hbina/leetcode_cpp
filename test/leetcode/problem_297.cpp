#include <doctest/doctest.h>

#include "leetcode/problem_297.hpp"

TEST_CASE("problem_297")
{
  aka::TreeNode<int>* input = new aka::TreeNode<>(
    1,
    new aka::TreeNode<>(2),
    new aka::TreeNode<>(
      3, new aka::TreeNode<>(4), new aka::TreeNode<>(5)));
  // aka::TreeNode<int> *result =
  // Codec<int>::deserialize(Codec<int>::serialize(input)); CHECK(*input ==
  // *result);
  delete input;
  // delete result;
}
