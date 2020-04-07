#include "doctest/doctest.h"

#include "leetcode/problem_24.hpp"

TEST_CASE("problem_24")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(2,
                                      new leetcode::ListNode<>(3,
                                                     new leetcode::ListNode<>(4))));
    const leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(2,
                       new leetcode::ListNode<>(1,
                                      new leetcode::ListNode<>(4,
                                                     new leetcode::ListNode<>(3))));
    leetcode::ListNode<> *result = leetcode::swapPairs(input);
    CHECK(*expected == *result);
    delete expected;
    delete result;
}

TEST_CASE("problem_24")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(2));
    const leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(2,
                       new leetcode::ListNode<>(1));
    leetcode::ListNode<> *result = leetcode::swapPairs(input);
    CHECK(*expected == *result);
    delete expected;
    delete result;
}

TEST_CASE("problem_24")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1);
    const leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(1);
    leetcode::ListNode<> *result = leetcode::swapPairs(input);
    CHECK(*expected == *result);
    delete expected;
    delete result;
}

TEST_CASE("problem_24")
{
    leetcode::ListNode<> *input = nullptr;
    const leetcode::ListNode<> *expected = nullptr;
    leetcode::ListNode<> *result = leetcode::swapPairs(input);
    CHECK(expected == result);
    delete expected;
    delete result;
}
