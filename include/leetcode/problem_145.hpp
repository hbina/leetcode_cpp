#pragma once

#include <vector>
#include <stack>
#include <iostream>

#include "data_structure/tree_node.hpp"

namespace leetcode
{

template <typename ValueTy>
static constexpr std::vector<ValueTy> postorderTraversal(const leetcode::TreeNode<ValueTy> *root)
{
    std::vector<ValueTy> AB, A, B;
    if (root)
    {
        if (root->left)
        {
            A = postorderTraversal(root->left);
        }
        if (root->right)
        {
            B = postorderTraversal(root->right);
        }
        AB.reserve(A.size() + B.size() + 1);
        AB.insert(AB.end(), A.begin(), A.end());
        AB.insert(AB.end(), B.begin(), B.end());
        AB.emplace_back(root->val);
    }
    return AB;
}

} // namespace leetcode
