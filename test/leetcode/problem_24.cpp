#include <doctest/doctest.h>

#include "leetcode/problem_24.hpp"

TEST_CASE("problem_24 1")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2, new aka::ListNode<>(3, new aka::ListNode<>(4))));
  const aka::ListNode<>* expected = new aka::ListNode<>(
    2,
    new aka::ListNode<>(
      1, new aka::ListNode<>(4, new aka::ListNode<>(3))));
  aka::ListNode<>* result = leetcode::swapPairs(input);
  CHECK(*expected == *result);
  delete expected;
  delete result;
}

TEST_CASE("problem_24 2")
{
  aka::ListNode<>* input =
    new aka::ListNode<>(1, new aka::ListNode<>(2));
  const aka::ListNode<>* expected =
    new aka::ListNode<>(2, new aka::ListNode<>(1));
  aka::ListNode<>* result = leetcode::swapPairs(input);
  CHECK(*expected == *result);
  delete expected;
  delete result;
}

TEST_CASE("problem_24 3")
{
  aka::ListNode<>* input = new aka::ListNode<>(1);
  const aka::ListNode<>* expected = new aka::ListNode<>(1);
  aka::ListNode<>* result = leetcode::swapPairs(input);
  CHECK(*expected == *result);
  delete expected;
  delete result;
}

TEST_CASE("problem_24 4")
{
  aka::ListNode<>* input = nullptr;
  const aka::ListNode<>* expected = nullptr;
  aka::ListNode<>* result = leetcode::swapPairs(input);
  CHECK(expected == result);
  delete expected;
  delete result;
}
