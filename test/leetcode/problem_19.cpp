#include <doctest/doctest.h>

#include "leetcode/problem_19.hpp"

TEST_CASE("problem_19")
{
  aka::ListNode<>* input_1 = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        3, new aka::ListNode<>(4, new aka::ListNode<>(5)))));
  int input_2 = 2;
  aka::ListNode<>* expected = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2, new aka::ListNode<>(3, new aka::ListNode<>(5))));
  aka::ListNode<>* result = leetcode::removeNthFromEnd(input_1, input_2);
  CHECK(*expected == *result);
  delete expected;
  delete result;
}

TEST_CASE("problem_19")
{
  aka::ListNode<>* input_1 = new aka::ListNode(1);
  int input_2 = 1;
  aka::ListNode<>* expected = nullptr;
  aka::ListNode<>* result = leetcode::removeNthFromEnd(input_1, input_2);
  CHECK(expected == result);
  delete expected;
  delete result;
}
