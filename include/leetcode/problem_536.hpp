#pragma once

#include "data_structure/tree_node.hpp"

namespace leetcode {

template<typename ValueTy>
bool
isMirror(const aka::TreeNode<ValueTy>* lhs,
         const aka::TreeNode<ValueTy>* rhs)
{
  if (lhs == nullptr && rhs == nullptr)
    return true;
  if (lhs == nullptr || rhs == nullptr)
    return false;
  return lhs->val == rhs->val && isMirror(lhs->right, rhs->left) &&
         isMirror(lhs->left, rhs->right);
}

template<typename ValueTy>
bool
isSymmetric(const aka::TreeNode<ValueTy>* root)
{
  return isMirror(root, root);
}

} // namespace leetcode
