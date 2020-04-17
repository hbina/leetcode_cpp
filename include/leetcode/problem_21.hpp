#pragma once

#include "data_structure/list_node.hpp"

#include <tuple>

namespace leetcode {

// Can be generalized further
template<typename ValueTy>
static constexpr std::tuple<akarithm::ListNode<ValueTy>*,
                            akarithm::ListNode<ValueTy>*,
                            akarithm::ListNode<ValueTy>*>
advanceZip(akarithm::ListNode<ValueTy>* lhs, akarithm::ListNode<ValueTy>* rhs)
{
  if (lhs && rhs) {
    if (lhs->val < rhs->val) {
      return { lhs, lhs->next, rhs };
    } else {
      return { rhs, lhs, rhs->next };
    }
  } else if (lhs) {
    return { lhs, lhs->next, nullptr };
  } else if (rhs) {
    return { rhs, nullptr, rhs->next };
  } else {
    return { nullptr, nullptr, nullptr };
  }
}

template<typename ValueTy>
static constexpr akarithm::ListNode<ValueTy>*
mergeTwoLists(akarithm::ListNode<ValueTy>* lhs,
              akarithm::ListNode<ValueTy>* rhs)
{
  if (lhs && rhs) {
    auto [root, lhs_iter, rhs_iter] = advanceZip(lhs, rhs);
    akarithm::ListNode<ValueTy>* iter = root;
    while (lhs_iter || rhs_iter) {
      auto [iter_next, lhs_next, rhs_next] = advanceZip(lhs_iter, rhs_iter);
      iter->next = iter_next;
      iter = iter->next;
      lhs_iter = lhs_next;
      rhs_iter = rhs_next;
    }
    return root;
  } else if (lhs) {
    return lhs;
  } else if (rhs) {
    return rhs;
  } else {
    return nullptr;
  }
}

} // namespace leetcode
