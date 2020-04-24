#pragma once

#include "data_structure/tree_node.hpp"

#include <iostream>
#include <iterator>
#include <stack>

namespace april2020 {

template<typename ValueTy>
static constexpr auto
diameterOfBinaryTree(const akarithm::TreeNode<ValueTy>* root) -> int
{
  std::stack<std::pair<const akarithm::TreeNode<ValueTy>*, int>> stack;
  stack.emplace(root, 0);
  while (!stack.empty()){

  }
  return {};
}

} // namespace april2020
