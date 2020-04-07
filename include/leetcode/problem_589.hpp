#pragma once

#include "data_structure/node.hpp"

#include <vector>
#include <stack>
#include <iostream>

namespace leetcode
{

template <typename ValueTy>
static constexpr std::vector<ValueTy> preorder_iterative(const leetcode::Node<ValueTy> *root)
{
    std::vector<ValueTy> result = {};
    std::deque<const leetcode::Node<ValueTy> *> s = {nullptr};

    while (root)
    {
        result.emplace_back(root->val);
        for (auto iter = root->children.rbegin(); iter != root->children.rend(); ++iter)
        {
            s.push_front(*iter);
        }
        root = s.front();
        s.pop_front();
    }
    return result;
}

template <typename ValueTy>
std::vector<ValueTy> preorder_recursive(const leetcode::Node<ValueTy> *root)
{
    std::vector<ValueTy> result = {};
    if (root)
    {
        result.emplace_back(root->val);
        for (const leetcode::Node<ValueTy> *child : root->children)
        {
            std::vector<int> tmp = preorder_recursive(child);
            result.insert(result.end(), tmp.begin(), tmp.end());
        }
    }
    return result;
}

} // namespace leetcode
