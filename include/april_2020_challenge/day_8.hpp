#pragma once

#include "data_structure/list_node.hpp"

namespace april2020 {

// NOTE: The input to this algorithm cannot be a cyclic node, else it will loop
// endlessly.
template <typename ValueTy>
static constexpr auto middleNode(akarithm::ListNode<ValueTy> *const head)
    -> akarithm::ListNode<ValueTy> * {
  auto *fastPtr = head;
  auto *slowPtr = head;
  auto ctr = 0;
  while (fastPtr) {
    fastPtr = fastPtr->next;
    ctr++;
    if (ctr % 2 == 0) {
      slowPtr = slowPtr->next;
    }
  }
  return slowPtr;
}

} // namespace april2020
