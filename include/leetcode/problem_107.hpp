#pragma once

#include "data_structure/tree_node.hpp"

#include <vector>
#include <stack>

namespace leetcode
{

template <typename ValueTy>
static constexpr std::vector<std::vector<ValueTy>>
levelOrderBottom(const leetcode::TreeNode<ValueTy> *root)
{
    std::vector<std::vector<ValueTy>> result = {};
    std::vector<const leetcode::TreeNode<ValueTy> *> layers = {root};
    while (!layers.empty())
    {
        std::vector<ValueTy> tmp;
        std::vector<const leetcode::TreeNode<ValueTy> *> next_layers;
        for (const leetcode::TreeNode<ValueTy> *x : layers)
        {
            tmp.emplace_back(x->val);
            if (x->left)
                next_layers.emplace_back(x->left);
            if (x->right)
                next_layers.emplace_back(x->right);
        }
        result.emplace_back(tmp);
        layers = next_layers;
    }
    return result;
}

} // namespace leetcode
