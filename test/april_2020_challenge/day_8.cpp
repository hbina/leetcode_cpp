#include <doctest/doctest.h>

#include "april_2020_challenge/day_8.hpp"
#include "data_structure/list_node.hpp"

TEST_CASE("april 2020 day 8 1")
{
  auto* middle = new aka::ListNode<>(
    3, new aka::ListNode<>(4, new aka::ListNode<>(5)));
  aka::ListNode<>* input =
    new aka::ListNode<>(1, new aka::ListNode<>(2, middle));
  auto* result = april2020::middleNode(input);
  CHECK(result == middle);
  delete input;
}

TEST_CASE("april 2020 day 8 2")
{
  aka::ListNode<>* input = nullptr;
  auto* result = april2020::middleNode(input);
  CHECK(result == nullptr);
  delete input;
}

TEST_CASE("april 2020 day 8 3")
{
  auto* middle = new aka::ListNode<>(2);
  aka::ListNode<>* input = new aka::ListNode<>(1, middle);
  auto* result = april2020::middleNode(input);
  CHECK(result == middle);
  delete input;
}
