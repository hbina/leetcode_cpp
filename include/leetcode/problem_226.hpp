#pragma once

#include "data_structure/tree_node.hpp"

#include <memory>

namespace leetcode {

template<typename ValueTy>
static constexpr aka::TreeNode<ValueTy>*
invertTree(aka::TreeNode<ValueTy>* root)
{
  if (root == nullptr) {
    return nullptr;
  } else {
    aka::TreeNode<ValueTy>* tmp_left = root->left;
    aka::TreeNode<ValueTy>* tmp_right = root->right;
    root->left = invertTree(tmp_right);
    root->right = invertTree(tmp_left);
    return root;
  }
}

} // namespace leetcode
