#include <doctest/doctest.h>

#include "leetcode/problem_206.hpp"

TEST_CASE("problem_206")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        3, new aka::ListNode<>(4, new aka::ListNode<>(5)))));

  const aka::ListNode<>* expected = new aka::ListNode<>(
    5,
    new aka::ListNode<>(
      4,
      new aka::ListNode<>(
        3, new aka::ListNode<>(2, new aka::ListNode<>(1)))));
  const aka::ListNode<>* result = leetcode::reverseList_iterative(input);
  CHECK(*result == *expected);
  delete result;
  delete expected;
}

TEST_CASE("problem_206")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        3, new aka::ListNode<>(4, new aka::ListNode<>(5)))));

  const aka::ListNode<>* expected = new aka::ListNode<>(
    5,
    new aka::ListNode<>(
      4,
      new aka::ListNode<>(
        3, new aka::ListNode<>(2, new aka::ListNode<>(1)))));

  const aka::ListNode<>* result = leetcode::reverseList_iterative(input);
  CHECK(*result == *expected);
  delete result;
  delete expected;
}

TEST_CASE("problem_206 single")
{
  aka::ListNode<>* input = new aka::ListNode<>(5);

  const aka::ListNode<>* expected = new aka::ListNode<>(5);

  const aka::ListNode<>* result = leetcode::reverseList_iterative(input);

  CHECK(*result == *expected);
  delete input;
  delete expected;
}

TEST_CASE("problem_206 single")
{
  aka::ListNode<>* input = new aka::ListNode<>(5);
  const aka::ListNode<>* expected = new aka::ListNode<>(5);
  const aka::ListNode<>* result = leetcode::reverseList_recursive(input);
  CHECK(*result == *expected);
  delete input;
  delete expected;
}
