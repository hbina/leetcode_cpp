#include "doctest/doctest.h"

#include "leetcode/problem_206.hpp"

TEST_CASE("problem_206")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(
                           2,
                           new leetcode::ListNode<>(
                               3,
                               new leetcode::ListNode<>(
                                   4,
                                   new leetcode::ListNode<>(
                                       5)))));

    const leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(5,
                       new leetcode::ListNode<>(
                           4,
                           new leetcode::ListNode<>(
                               3,
                               new leetcode::ListNode<>(
                                   2,
                                   new leetcode::ListNode<>(
                                       1)))));
    const leetcode::ListNode<> *result = leetcode::reverseList_iterative(input);
    CHECK(*result == *expected);
    delete result;
    delete expected;
}

TEST_CASE("problem_206")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(
                           2,
                           new leetcode::ListNode<>(
                               3,
                               new leetcode::ListNode<>(
                                   4,
                                   new leetcode::ListNode<>(
                                       5)))));

    const leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(5,
                       new leetcode::ListNode<>(
                           4,
                           new leetcode::ListNode<>(
                               3,
                               new leetcode::ListNode<>(
                                   2,
                                   new leetcode::ListNode<>(
                                       1)))));

    const leetcode::ListNode<> *result = leetcode::reverseList_iterative(input);
    CHECK(*result == *expected);
    delete result;
    delete expected;
}

TEST_CASE("problem_206 single")
{
    leetcode::ListNode<> *input = new leetcode::ListNode<>(5);

    const leetcode::ListNode<> *expected = new leetcode::ListNode<>(5);

    const leetcode::ListNode<> *result = leetcode::reverseList_iterative(input);

    CHECK(*result == *expected);
    delete input;
    delete expected;
}

TEST_CASE("problem_206 single")
{
    leetcode::ListNode<> *input = new leetcode::ListNode<>(5);
    const leetcode::ListNode<> *expected = new leetcode::ListNode<>(5);
    const leetcode::ListNode<> *result = leetcode::reverseList_recursive(input);
    CHECK(*result == *expected);
    delete input;
    delete expected;
}
