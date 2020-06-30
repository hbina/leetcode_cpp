#pragma once

#include "data_structure/node.hpp"

#include <iostream>
#include <stack>
#include <vector>

namespace leetcode {

template<typename ValueTy>
static constexpr auto
preorder_iterative(const aka::Node<ValueTy>* root) -> std::vector<ValueTy>
{
  std::vector<ValueTy> result = {};
  std::deque<const aka::Node<ValueTy>*> s = { nullptr };

  while (root) {
    result.emplace_back(root->val);
    for (auto iter = root->children.rbegin(); iter != root->children.rend();
         ++iter) {
      s.push_front(*iter);
    }
    root = s.front();
    s.pop_front();
  }
  return result;
}

template<typename ValueTy>
std::vector<ValueTy>
preorder_recursive(const aka::Node<ValueTy>* root)
{
  std::vector<ValueTy> result = {};
  if (root) {
    result.emplace_back(root->val);
    for (const aka::Node<ValueTy>* child : root->children) {
      std::vector<int> tmp = preorder_recursive(child);
      result.insert(result.end(), tmp.begin(), tmp.end());
    }
  }
  return result;
}

} // namespace leetcode
