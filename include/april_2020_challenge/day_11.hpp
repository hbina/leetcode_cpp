#pragma once

#include "data_structure/tree_node.hpp"

#include <algorithm>
#include <iterator>
#include <stack>
#include <unordered_map>


namespace april2020 {

template<typename ValueTy>
static auto
diameterOfBinaryTree(const aka::TreeNode<ValueTy>* root) -> int
{
  // Prelude
  using PointerTy = typename aka::TreeNode<ValueTy> const*;

  std::stack<PointerTy> stack;
  std::unordered_map<PointerTy, int> map;
  auto max = 0;

  if (!root) {
    return 0;
  } else {
    stack.emplace(root);
    while (!stack.empty()) {
      PointerTy top = stack.top();
      stack.pop();

      if (!top->left && !top->right) {
        max = std::max(max, 1);
        map.emplace(std::make_pair(top, 1));
      } else if (!top->left && top->right) {
        auto find = map.find(top->right);
        if (std::cend(map) == find) {
          stack.emplace(top);
          stack.emplace(top->right);
        } else {
          max = std::max(max, find->second + 1);
          map.emplace(top, find->second + 1);
        }
      } else if (top->left && !top->right) {
        auto find = map.find(top->left);
        if (std::cend(map) == find) {
          stack.emplace(top);
          stack.emplace(top->left);
        } else {
          max = std::max(max, find->second + 1);
          map.emplace(top, find->second + 1);
        }
      } else {
        auto find_left = map.find(top->left);
        auto find_right = map.find(top->right);

        if (find_left == std::cend(map) && find_left == std::cend(map)) {
          stack.emplace(top);
          stack.emplace(top->left);
          stack.emplace(top->right);
        } else if (find_left != std::cend(map) && find_left == std::cend(map)) {
          stack.emplace(top);
          stack.emplace(top->right);
        } else if ((find_left == std::cend(map) &&
                    find_left != std::cend(map))) {
          stack.emplace(top);
          stack.emplace(top->left);
        } else {
          max = std::max(max, find_left->second + 1 + find_right->second);
          map.emplace(top,
                      std::max(find_left->second + 1, find_right->second + 1));
        }
      }
    }
    return max - 1;
  }
}

} // namespace april2020
