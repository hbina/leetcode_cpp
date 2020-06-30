#pragma once

#include "data_structure/postorder_iterator.hpp"
#include "data_structure/preorder_iterator.hpp"
#include "data_structure/tree_node.hpp"

namespace leetcode {

template<typename ValueTy>
static constexpr auto
findTarget(const aka::TreeNode<ValueTy>* root, int k) -> bool
{
  aka::PreorderIterator pre_order = aka::PreorderIterator(root);
  aka::PostorderIterator post_order = aka::PostorderIterator(root);
  while (pre_order.hasNext() && post_order.hasNext()) {
    auto lhs = pre_order.peek();
    auto rhs = post_order.peek();

    if (lhs == rhs)
      return false;
    else if (lhs->val + rhs->val == k)
      return true;
    else {
      if (lhs->val + rhs->val > k)
        rhs = post_order.next();
      else
        lhs = pre_order.next();
    }
  }
  return false;
}

} // namespace leetcode
