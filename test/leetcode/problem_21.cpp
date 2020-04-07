#include "doctest/doctest.h"

#include "leetcode/problem_21.hpp"

TEST_CASE("problem_21")
{
    leetcode::ListNode<> *input_1 = new leetcode::ListNode<>(1,
                                         new leetcode::ListNode<>(2,
                                                        new leetcode::ListNode<>(4)));
    leetcode::ListNode<> *input_2 = new leetcode::ListNode<>(1,
                                         new leetcode::ListNode<>(3,
                                                        new leetcode::ListNode<>(4)));
    leetcode::ListNode<> *expected = new leetcode::ListNode<>(1,
                                          new leetcode::ListNode<>(1,
                                                         new leetcode::ListNode<>(2,
                                                                        new leetcode::ListNode<>(3,
                                                                                       new leetcode::ListNode<>(4,
                                                                                                      new leetcode::ListNode<>(4))))));
    leetcode::ListNode<> *result = leetcode::mergeTwoLists(input_1, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}

TEST_CASE("problem_21")
{
    leetcode::ListNode<> *input_1 = nullptr;
    leetcode::ListNode<> *input_2 = nullptr;
    leetcode::ListNode<> *expected = nullptr;
    leetcode::ListNode<> *result = leetcode::mergeTwoLists(input_1, input_2);
    CHECK(expected == result);
}

TEST_CASE("problem_21")
{
    leetcode::ListNode<> *input_1 = new leetcode::ListNode<>(1);
    leetcode::ListNode<> *input_2 = new leetcode::ListNode<>(3);
    leetcode::ListNode<> *expected = new leetcode::ListNode<>(1,
                                          new leetcode::ListNode<>(3));
    leetcode::ListNode<> *result = leetcode::mergeTwoLists(input_1, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}

TEST_CASE("problem_21")
{
    leetcode::ListNode<> *input_1 = new leetcode::ListNode<>(1);
    leetcode::ListNode<> *input_2 = nullptr;
    leetcode::ListNode<> *expected = new leetcode::ListNode<>(1);
    leetcode::ListNode<> *result = leetcode::mergeTwoLists(input_1, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}

TEST_CASE("problem_21")
{
    leetcode::ListNode<> *input_1 = nullptr;
    leetcode::ListNode<> *input_2 = new leetcode::ListNode<>(1);
    leetcode::ListNode<> *expected = new leetcode::ListNode<>(1);
    leetcode::ListNode<> *result = leetcode::mergeTwoLists(input_1, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}
