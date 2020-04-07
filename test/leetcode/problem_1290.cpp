#include "doctest/doctest.h"

#include "leetcode/problem_1290.hpp"

TEST_CASE("problem_1290")
{
    leetcode::ListNode<int> *input = new leetcode::ListNode<>(0);
    CHECK(0 == leetcode::getDecimalValue(input));
    delete input;
}

TEST_CASE("problem_1290")
{
    leetcode::ListNode<int> *input = new leetcode::ListNode<>(1);
    CHECK(1 == leetcode::getDecimalValue(input));
    delete input;
}

TEST_CASE("problem_1290")
{
    // lmao
    leetcode::ListNode<int> *input =
        new leetcode::ListNode<>(
            1,
            new leetcode::ListNode<>(0,
                           new leetcode::ListNode<>(0,
                                          new leetcode::ListNode<>(1,
                                                         new leetcode::ListNode<>(0,
                                                                        new leetcode::ListNode<>(0,
                                                                                       new leetcode::ListNode<>(1,
                                                                                                      new leetcode::ListNode<>(1,
                                                                                                                     new leetcode::ListNode<>(1,
                                                                                                                                    new leetcode::ListNode<>(0,
                                                                                                                                                   new leetcode::ListNode<>(0,
                                                                                                                                                                  new leetcode::ListNode<>(0,
                                                                                                                                                                                 new leetcode::ListNode<>(0,
                                                                                                                                                                                                new leetcode::ListNode<>(0,
                                                                                                                                                                                                               new leetcode::ListNode<>(0)))))))))))))));
    CHECK(
        18880 ==
        leetcode::getDecimalValue(input));
    delete input;
}

TEST_CASE("problem_1290")
{
    leetcode::ListNode<int> *input =
        new leetcode::ListNode<>(
            0,
            new leetcode::ListNode<>(0));
    CHECK(0 == leetcode::getDecimalValue(input));
    delete input;
}

TEST_CASE("problem_1290")
{
    leetcode::ListNode<int> *input =
        new leetcode::ListNode<>(
            1,
            new leetcode::ListNode<>(
                0,
                new leetcode::ListNode<>(1)));
    CHECK(5 == leetcode::getDecimalValue(input));
    delete input;
}
