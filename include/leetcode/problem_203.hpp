#pragma once

#include "data_structure/list_node.hpp"

namespace leetcode {

template<typename ValueTy, typename UnaryPredicate>
static constexpr aka::ListNode<ValueTy>*
removeElements_If(aka::ListNode<ValueTy>* head, const UnaryPredicate& pred)
{
  if (!head) {
    return nullptr;
  } else if (pred(head->val)) {
    aka::ListNode<ValueTy>* result = removeElements_If(head->next, pred);
    head->next = nullptr;
    delete head;
    return result;
  } else {
    if (!head->next) {
      return head;
    } else {
      if (pred(head->next->val)) {
        aka::ListNode<ValueTy>* tmp = head->next;
        head->next = removeElements_If(head->next->next, pred);
        tmp->next = nullptr;
        delete tmp;
        return head;
      } else {
        head->next = removeElements_If(head->next, pred);
        return head;
      }
    }
  }
}

template<typename ValueTy>
static constexpr aka::ListNode<ValueTy>*
removeElements(aka::ListNode<ValueTy>* head, const ValueTy& val)
{
  if (!head) {
    return nullptr;
  } else if (head->val == val) {
    aka::ListNode<ValueTy>* result = removeElements(head->next, val);
    head->next = nullptr;
    delete head;
    return result;
  } else {
    if (!head->next) {
      return head;
    } else {
      if (head->next->val == val) {
        aka::ListNode<ValueTy>* tmp = head->next;
        head->next = removeElements(head->next->next, val);
        tmp->next = nullptr;
        delete tmp;
        return head;
      } else {
        head->next = removeElements(head->next, val);
        return head;
      }
    }
  }
}

} // namespace leetcode
