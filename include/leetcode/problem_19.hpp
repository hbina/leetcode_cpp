#pragma once

#include "data_structure/list_node.hpp"

namespace leetcode {

template<typename ValueTy, typename IndexTy = int>
static constexpr auto
removeNthFromEnd(aka::ListNode<ValueTy>* head, const IndexTy& n)
  -> aka::ListNode<ValueTy>*
{
  aka::ListNode<ValueTy>* barrier = head;
  for (IndexTy iter = 0; iter < n; iter++) {
    barrier = barrier->next;
  }

  if (!barrier) {
    aka::ListNode<ValueTy>* result = head->next;
    head->next = nullptr;
    delete head;
    return result;
  } else {
    aka::ListNode<ValueTy>* iter = head;
    while (barrier->next) {
      barrier = barrier->next;
      iter = iter->next;
    }

    aka::ListNode<ValueTy>* tmp = iter->next;
    iter->next = iter->next->next;
    tmp->next = nullptr;
    delete tmp;
    return head;
  }
}

} // namespace leetcode
