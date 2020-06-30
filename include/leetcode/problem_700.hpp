#pragma once

#include "data_structure/tree_node.hpp"

#include "util/generic/bst_search.hpp"

namespace leetcode {

template<typename ValueTy>
static constexpr auto
searchBST(const aka::TreeNode<ValueTy>* root, const ValueTy& val)
  -> const aka::TreeNode<ValueTy>*
{
  return aka::bst_search(
    root,
    [&](const ValueTy& node) -> bool { return node == val; },
    [&](const ValueTy& node) -> bool { return node < val; });
}

} // namespace leetcode
