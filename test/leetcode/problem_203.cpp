#include <doctest/doctest.h>

#include "leetcode/problem_203.hpp"

TEST_CASE("problem_203")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        6,
        new aka::ListNode<>(
          3,
          new aka::ListNode<>(
            4, new aka::ListNode<>(5, new aka::ListNode<>(6)))))));
  const int input_2 = 6;
  const aka::ListNode<>* expected = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        3, new aka::ListNode<>(4, new aka::ListNode<>(5)))));
  aka::ListNode<>* result = leetcode::removeElements(input, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}

TEST_CASE("problem_203")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        6,
        new aka::ListNode<>(
          3,
          new aka::ListNode<>(
            4, new aka::ListNode<>(5, new aka::ListNode<>(6)))))));
  const int input_2 = 32;
  const aka::ListNode<>* expected = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        6,
        new aka::ListNode<>(
          3,
          new aka::ListNode<>(
            4, new aka::ListNode<>(5, new aka::ListNode<>(6)))))));
  aka::ListNode<>* result = leetcode::removeElements(input, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}

TEST_CASE("problem_203")
{
  aka::ListNode<>* input = new aka::ListNode<>(1);
  const int input_2 = 1;
  const aka::ListNode<>* expected = nullptr;
  aka::ListNode<>* result = leetcode::removeElements(input, input_2);
  CHECK(expected == result);
  delete result;
  delete expected;
}

TEST_CASE("problem_203")
{
  aka::ListNode<>* input = nullptr;
  const int input_2 = 1;
  const aka::ListNode<>* expected = nullptr;
  aka::ListNode<>* result = leetcode::removeElements(input, input_2);
  CHECK(expected == result);
  delete result;
  delete expected;
}

TEST_CASE("problem_203")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    1, new aka::ListNode<>(1, new aka::ListNode<>(1)));
  const int input_2 = 1;
  const aka::ListNode<>* expected = nullptr;
  aka::ListNode<>* result = leetcode::removeElements(input, input_2);
  CHECK(expected == result);
  delete result;
  delete expected;
}

TEST_CASE("problem_203")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    3, new aka::ListNode<>(2, new aka::ListNode<>(1)));
  const int input_2 = 1;
  const aka::ListNode<>* expected =
    new aka::ListNode<>(3, new aka::ListNode<>(2));
  aka::ListNode<>* result = leetcode::removeElements(input, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}

TEST_CASE("problem_203")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        6,
        new aka::ListNode<>(
          3,
          new aka::ListNode<>(
            4, new aka::ListNode<>(5, new aka::ListNode<>(6)))))));
  const int input_2 = 6;
  const aka::ListNode<>* expected = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        3, new aka::ListNode<>(4, new aka::ListNode<>(5)))));
  aka::ListNode<>* result = leetcode::removeElements(input, input_2);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}

TEST_CASE("problem_203 -- If")
{
  aka::ListNode<>* input = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      2,
      new aka::ListNode<>(
        6,
        new aka::ListNode<>(
          3,
          new aka::ListNode<>(
            4, new aka::ListNode<>(5, new aka::ListNode<>(6)))))));
  const aka::ListNode<>* expected = new aka::ListNode<>(
    1, new aka::ListNode<>(3, new aka::ListNode<>(5)));
  aka::ListNode<>* result = leetcode::removeElements_If(
    input, [](const int& val) -> bool { return val % 2 == 0; });
  CHECK(*expected == *result);
  delete result;
  delete expected;
}
