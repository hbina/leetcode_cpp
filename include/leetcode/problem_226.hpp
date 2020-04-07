#pragma once

#include "data_structure/tree_node.hpp"

#include <memory>

namespace leetcode
{

template <typename ValueTy>
static constexpr leetcode::TreeNode<ValueTy> *invertTree(TreeNode<ValueTy> *root)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    else
    {
        leetcode::TreeNode<ValueTy> *tmp_left = root->left;
        leetcode::TreeNode<ValueTy> *tmp_right = root->right;
        root->left = invertTree(tmp_right);
        root->right = invertTree(tmp_left);
        return root;
    }
}

} // namespace leetcode
