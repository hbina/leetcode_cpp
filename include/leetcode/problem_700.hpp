#pragma once

#include "data_structure/tree_node.hpp"

#include "util/generic/bst_search.hpp"

namespace leetcode {

template <typename ValueTy>
static constexpr auto searchBST(const akarithm::TreeNode<ValueTy> *root,
                                const ValueTy &val)
    -> const akarithm::TreeNode<ValueTy> * {
  return akarithm::bst_search(
      root, [&](const ValueTy &node) -> bool { return node == val; },
      [&](const ValueTy &node) -> bool { return node < val; });
}

} // namespace leetcode
