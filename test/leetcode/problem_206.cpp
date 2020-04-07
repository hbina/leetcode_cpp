#include "doctest/doctest.h"

#include "leetcode/problem_206.hpp"

TEST_CASE("problem_206") {
  akarithm::ListNode<> *input = new akarithm::ListNode<>(
      1,
      new akarithm::ListNode<>(
          2, new akarithm::ListNode<>(
                 3, new akarithm::ListNode<>(4, new akarithm::ListNode<>(5)))));

  const akarithm::ListNode<> *expected = new akarithm::ListNode<>(
      5,
      new akarithm::ListNode<>(
          4, new akarithm::ListNode<>(
                 3, new akarithm::ListNode<>(2, new akarithm::ListNode<>(1)))));
  const akarithm::ListNode<> *result = leetcode::reverseList_iterative(input);
  CHECK(*result == *expected);
  delete result;
  delete expected;
}

TEST_CASE("problem_206") {
  akarithm::ListNode<> *input = new akarithm::ListNode<>(
      1,
      new akarithm::ListNode<>(
          2, new akarithm::ListNode<>(
                 3, new akarithm::ListNode<>(4, new akarithm::ListNode<>(5)))));

  const akarithm::ListNode<> *expected = new akarithm::ListNode<>(
      5,
      new akarithm::ListNode<>(
          4, new akarithm::ListNode<>(
                 3, new akarithm::ListNode<>(2, new akarithm::ListNode<>(1)))));

  const akarithm::ListNode<> *result = leetcode::reverseList_iterative(input);
  CHECK(*result == *expected);
  delete result;
  delete expected;
}

TEST_CASE("problem_206 single") {
  akarithm::ListNode<> *input = new akarithm::ListNode<>(5);

  const akarithm::ListNode<> *expected = new akarithm::ListNode<>(5);

  const akarithm::ListNode<> *result = leetcode::reverseList_iterative(input);

  CHECK(*result == *expected);
  delete input;
  delete expected;
}

TEST_CASE("problem_206 single") {
  akarithm::ListNode<> *input = new akarithm::ListNode<>(5);
  const akarithm::ListNode<> *expected = new akarithm::ListNode<>(5);
  const akarithm::ListNode<> *result = leetcode::reverseList_recursive(input);
  CHECK(*result == *expected);
  delete input;
  delete expected;
}
