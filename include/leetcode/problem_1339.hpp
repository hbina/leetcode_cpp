#pragma once

#include "data_structure/tree_node.hpp"
#include "data_structure/preorder_iterator.hpp"

namespace leetcode
{

template <typename IntTy = int>
static constexpr auto
maxProduct(
    const leetcode::TreeNode<IntTy> *root)
    -> IntTy
{
    constexpr auto tree_accumulator =
        [](const leetcode::TreeNode<IntTy> *root,
           IntTy acc = {})
        -> IntTy {
        leetcode::PreorderIterator iter = leetcode::PreorderIterator(root);
        while (iter.hasNext())
        {
            acc += iter.next()->val;
        }
        return acc;
    };

    IntTy sum = tree_accumulator(root, 0);
    leetcode::PreorderIterator iter = leetcode::PreorderIterator(root);
    while (iter.hasNext())
    {
    }
    return 0;
}

} // namespace leetcode
