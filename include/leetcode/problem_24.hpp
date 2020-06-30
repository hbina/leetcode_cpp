#pragma once

#include "data_structure/list_node.hpp"

namespace leetcode {

template<typename ValueTy>
static constexpr auto
swapPairs(aka::ListNode<ValueTy>* head) -> aka::ListNode<ValueTy>*
{
  if (!head) {
    return nullptr;
  } else if (!head->next) {
    return head;
  } else {
    aka::ListNode<ValueTy>* result = head->next;
    head->next = swapPairs(result->next);
    result->next = head;
    return result;
  }
}

} // namespace leetcode
