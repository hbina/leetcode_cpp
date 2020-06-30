#include <doctest/doctest.h>

#include "leetcode/problem_589.hpp"

TEST_CASE("problem_589 -- iterative")
{
  const aka::Node<>* input = new aka::Node<>(
    1,
    { new aka::Node<>(
        3, { new aka::Node<>(5), new aka::Node<>(6) }),
      new aka::Node<>(2),
      new aka::Node<>(4) });
  const std::vector<int> expected = { 1, 3, 5, 6, 2, 4 };
  const std::vector<int> result = leetcode::preorder_iterative(input);
  CHECK(expected == result);
  delete input;
}

TEST_CASE("problem_589 -- recursive")
{
  const aka::Node<>* input = new aka::Node<>(
    1,
    { new aka::Node<>(
        3, { new aka::Node<>(5), new aka::Node<>(6) }),
      new aka::Node<>(2),
      new aka::Node<>(4) });
  const std::vector<int> expected = { 1, 3, 5, 6, 2, 4 };
  const std::vector<int> result = leetcode::preorder_recursive(input);
  CHECK(expected == result);
  delete input;
}
