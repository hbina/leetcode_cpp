#pragma once

#include "data_structure/list_node.hpp"

namespace leetcode
{

template <typename ValueTy>
static constexpr leetcode::ListNode<ValueTy> *reverseList_iterative(
    leetcode::ListNode<ValueTy> *head)
{
    if (!head)
    {
        return nullptr;
    }

    leetcode::ListNode<ValueTy> *pointer_before = nullptr;
    leetcode::ListNode<ValueTy> *pointer_current = head;
    leetcode::ListNode<ValueTy> *pointer_after = head->next;

    while (pointer_after)
    {
        pointer_current->next = pointer_before;

        // Update pointers
        pointer_before = pointer_current;
        pointer_current = pointer_after;
        pointer_after = pointer_after->next;
    }
    pointer_current->next = pointer_before;
    return pointer_current;
}

template <typename ValueTy>
static constexpr leetcode::ListNode<ValueTy> *reverseList_recursive_helper(
    leetcode::ListNode<ValueTy> *head,
    leetcode::ListNode<ValueTy> *next)
{
    // Means that we are at the end.
    if (!next)
    {
        return head;
    }
    else
    {
        leetcode::ListNode<ValueTy> *tmp = next->next;
        next->next = head;
        return reverseList_recursive_helper(next, tmp);
    }
}

template <typename ValueTy>
static constexpr leetcode::ListNode<ValueTy> *reverseList_recursive(ListNode<ValueTy> *head)
{
    if (head)
    {
        leetcode::ListNode<ValueTy> *tmp = head->next;
        head->next = nullptr;
        return reverseList_recursive_helper(head, tmp);
    }
    else
    {
        return nullptr;
    }
}

} // namespace leetcode
