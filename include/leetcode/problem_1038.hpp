#pragma once

#include "data_structure/tree_node.hpp"

namespace leetcode {

template<typename ValueTy>
static constexpr void
bstToGst_Recursive(aka::TreeNode<ValueTy>* root, ValueTy& accumulator)
{
  if (root->right)
    bstToGst_Recursive(root->right, accumulator);
  accumulator += root->val;
  root->val = accumulator;
  if (root->left)
    bstToGst_Recursive(root->left, accumulator);
}

template<typename ValueTy>
static constexpr aka::TreeNode<ValueTy>*
bstToGst(aka::TreeNode<ValueTy>* root)
{
  ValueTy init = 0;
  bstToGst_Recursive(root, init);
  return root;
}

} // namespace leetcode
