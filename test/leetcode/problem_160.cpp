#include "doctest/doctest.h"

#include "leetcode/problem_160.hpp"

TEST_CASE("problem_160")
{
    leetcode::ListNode<int> *c1 =
        new leetcode::ListNode<int>(6,
                          new leetcode::ListNode<int>(
                              7,
                              new leetcode::ListNode<int>(
                                  8,
                                  nullptr)));
    leetcode::ListNode<int> *a1 =
        new leetcode::ListNode<int>(1,
                          new leetcode::ListNode<int>(
                              2,
                              c1));
    leetcode::ListNode<int> *b1 =
        new leetcode::ListNode<int>(3,
                          new leetcode::ListNode<int>(
                              4,
                              new leetcode::ListNode<int>(
                                  5,
                                  c1)));
    leetcode::ListNode<int> *result = leetcode::getIntersectionNode(a1, b1);
    CHECK(*c1 == *result);
    // Solely for cleanup purposes...
    b1->next->next->next = nullptr;
    delete a1;
    delete b1;
}
