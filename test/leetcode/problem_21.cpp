#include <doctest/doctest.h>

#include "leetcode/problem_21.hpp"

TEST_CASE("problem_21")
{
  aka::ListNode<>* input_1 = new aka::ListNode<>(
    1, new aka::ListNode<>(2, new aka::ListNode<>(4)));
  aka::ListNode<>* input_2 = new aka::ListNode<>(
    1, new aka::ListNode<>(3, new aka::ListNode<>(4)));
  aka::ListNode<>* expected = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      1,
      new aka::ListNode<>(
        2,
        new aka::ListNode<>(
          3, new aka::ListNode<>(4, new aka::ListNode<>(4))))));
  aka::ListNode<>* result = leetcode::mergeTwoLists(input_1, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}

TEST_CASE("problem_21")
{
  aka::ListNode<>* input_1 = nullptr;
  aka::ListNode<>* input_2 = nullptr;
  aka::ListNode<>* expected = nullptr;
  aka::ListNode<>* result = leetcode::mergeTwoLists(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("problem_21")
{
  aka::ListNode<>* input_1 = new aka::ListNode<>(1);
  aka::ListNode<>* input_2 = new aka::ListNode<>(3);
  aka::ListNode<>* expected =
    new aka::ListNode<>(1, new aka::ListNode<>(3));
  aka::ListNode<>* result = leetcode::mergeTwoLists(input_1, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}

TEST_CASE("problem_21")
{
  aka::ListNode<>* input_1 = new aka::ListNode<>(1);
  aka::ListNode<>* input_2 = nullptr;
  aka::ListNode<>* expected = new aka::ListNode<>(1);
  aka::ListNode<>* result = leetcode::mergeTwoLists(input_1, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}

TEST_CASE("problem_21")
{
  aka::ListNode<>* input_1 = nullptr;
  aka::ListNode<>* input_2 = new aka::ListNode<>(1);
  aka::ListNode<>* expected = new aka::ListNode<>(1);
  aka::ListNode<>* result = leetcode::mergeTwoLists(input_1, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}
