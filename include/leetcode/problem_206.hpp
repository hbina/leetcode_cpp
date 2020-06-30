#pragma once

#include "data_structure/list_node.hpp"

namespace leetcode {

template<typename ValueTy>
static constexpr aka::ListNode<ValueTy>*
reverseList_iterative(aka::ListNode<ValueTy>* head)
{
  if (!head) {
    return nullptr;
  }

  aka::ListNode<ValueTy>* pointer_before = nullptr;
  aka::ListNode<ValueTy>* pointer_current = head;
  aka::ListNode<ValueTy>* pointer_after = head->next;

  while (pointer_after) {
    pointer_current->next = pointer_before;

    // Update pointers
    pointer_before = pointer_current;
    pointer_current = pointer_after;
    pointer_after = pointer_after->next;
  }
  pointer_current->next = pointer_before;
  return pointer_current;
}

template<typename ValueTy>
static constexpr aka::ListNode<ValueTy>*
reverseList_recursive_helper(aka::ListNode<ValueTy>* head,
                             aka::ListNode<ValueTy>* next)
{
  // Means that we are at the end.
  if (!next) {
    return head;
  } else {
    aka::ListNode<ValueTy>* tmp = next->next;
    next->next = head;
    return reverseList_recursive_helper(next, tmp);
  }
}

template<typename ValueTy>
static constexpr auto
reverseList_recursive(aka::ListNode<ValueTy>* head)
  -> aka::ListNode<ValueTy>*
{
  if (head) {
    aka::ListNode<ValueTy>* tmp = head->next;
    head->next = nullptr;
    return reverseList_recursive_helper(head, tmp);
  } else {
    return nullptr;
  }
}

} // namespace leetcode
