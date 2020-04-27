#pragma once

#include "data_structure/tree_node.hpp"

#include <algorithm>
#include <numeric>
#include <stack>
#include <vector>

namespace april2020 {

template<typename ValueTy>
static auto
bstFromPreorder(const std::vector<ValueTy>& preorder)
  -> akarithm::TreeNode<ValueTy>*
{
  akarithm::TreeNode<ValueTy>* result =
    new akarithm::TreeNode<ValueTy>(preorder.front());

  std::stack<akarithm::TreeNode<ValueTy>*> stack;
  stack.emplace(result);

  auto begin = std::next(std::cbegin(preorder));
  auto end = std::cend(preorder);

  while (begin != end) {
    auto top = stack.top();
    stack.pop();

    if (*begin < top->val) {
      top->left = new akarithm::TreeNode<int>(*begin);
      stack.emplace(top);
      stack.emplace(top->left);
    } else {
      while (!stack.empty() && *begin > stack.top()->val) {
        top = stack.top();
        stack.pop();
      }
      top->right = new akarithm::TreeNode<int>(*begin);
      stack.emplace(top->right);
    }
    begin = std::next(begin);
  }
  return result;
}

}
