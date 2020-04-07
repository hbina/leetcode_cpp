#include "doctest/doctest.h"

#include "leetcode/problem_19.hpp"

TEST_CASE("problem_19")
{
    leetcode::ListNode<> *input_1 =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(2,
                                      new leetcode::ListNode<>(3,
                                                     new leetcode::ListNode<>(4,
                                                                    new leetcode::ListNode<>(5)))));
    int input_2 = 2;
    leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(1,
                     new leetcode::ListNode<>(2,
                                  new leetcode::ListNode<>(3,
                                               new leetcode::ListNode<>(5))));
    leetcode::ListNode<> *result = leetcode::removeNthFromEnd(input_1, input_2);
    CHECK(*expected == *result);
    delete expected;
    delete result;
}

TEST_CASE("problem_19")
{
    leetcode::ListNode<> *input_1 =
        new leetcode::ListNode(1);
    int input_2 = 1;
    leetcode::ListNode<> *expected = nullptr;
    leetcode::ListNode<> *result = leetcode::removeNthFromEnd(input_1, input_2);
    CHECK(expected == result);
    delete expected;
    delete result;
}
