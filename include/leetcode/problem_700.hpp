#pragma once

#include "data_structure/tree_node.hpp"

#include "util/generic/bst_search.hpp"

namespace leetcode
{

template <typename ValueTy>
static constexpr auto
searchBST(
    const leetcode::TreeNode<ValueTy> *root,
    const ValueTy &val)
    -> const leetcode::TreeNode<ValueTy> *
{
    return leetcode::bst_search(
        root,
        [&](const ValueTy &node)
            -> bool {
            return node == val;
        },
        [&](const ValueTy &node)
            -> bool {
            return node < val;
        });
}

} // namespace leetcode
