#pragma once

#include "data_structure/list_node.hpp"

namespace leetcode {

template <typename ValueTy>
static constexpr auto swapPairs(akarithm::ListNode<ValueTy> *head)
    -> akarithm::ListNode<ValueTy> * {
  if (!head) {
    return nullptr;
  } else if (!head->next) {
    return head;
  } else {
    akarithm::ListNode<ValueTy> *result = head->next;
    head->next = swapPairs(result->next);
    result->next = head;
    return result;
  }
}

} // namespace leetcode
