#include <doctest/doctest.h>

#include "leetcode/problem_1290.hpp"

TEST_CASE("problem_1290")
{
  aka::ListNode<int>* input = new aka::ListNode<>(0);
  CHECK(0 == leetcode::getDecimalValue(input));
  delete input;
}

TEST_CASE("problem_1290")
{
  aka::ListNode<int>* input = new aka::ListNode<>(1);
  CHECK(1 == leetcode::getDecimalValue(input));
  delete input;
}

TEST_CASE("problem_1290")
{
  // lmao
  aka::ListNode<int>* input = new aka::ListNode<>(
    1,
    new aka::ListNode<>(
      0,
      new aka::ListNode<>(
        0,
        new aka::ListNode<>(
          1,
          new aka::ListNode<>(
            0,
            new aka::ListNode<>(
              0,
              new aka::ListNode<>(
                1,
                new aka::ListNode<>(
                  1,
                  new aka::ListNode<>(
                    1,
                    new aka::ListNode<>(
                      0,
                      new aka::ListNode<>(
                        0,
                        new aka::ListNode<>(
                          0,
                          new aka::ListNode<>(
                            0,
                            new aka::ListNode<>(
                              0, new aka::ListNode<>(0)))))))))))))));
  CHECK(18880 == leetcode::getDecimalValue(input));
  delete input;
}

TEST_CASE("problem_1290")
{
  aka::ListNode<int>* input =
    new aka::ListNode<>(0, new aka::ListNode<>(0));
  CHECK(0 == leetcode::getDecimalValue(input));
  delete input;
}

TEST_CASE("problem_1290")
{
  aka::ListNode<int>* input = new aka::ListNode<>(
    1, new aka::ListNode<>(0, new aka::ListNode<>(1)));
  CHECK(5 == leetcode::getDecimalValue(input));
  delete input;
}
