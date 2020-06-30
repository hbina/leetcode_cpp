#include <doctest/doctest.h>

#include "leetcode/problem_160.hpp"

TEST_CASE("problem_160")
{
  aka::ListNode<int>* c1 = new aka::ListNode<int>(
    6, new aka::ListNode<int>(7, new aka::ListNode<int>(8, nullptr)));
  aka::ListNode<int>* a1 =
    new aka::ListNode<int>(1, new aka::ListNode<int>(2, c1));
  aka::ListNode<int>* b1 = new aka::ListNode<int>(
    3, new aka::ListNode<int>(4, new aka::ListNode<int>(5, c1)));
  aka::ListNode<int>* result = leetcode::getIntersectionNode(a1, b1);
  CHECK(*c1 == *result);
  // Solely for cleanup purposes...
  b1->next->next->next = nullptr;
  delete a1;
  delete b1;
}
