#pragma once

#include "data_structure/node_next.hpp"

#include <iostream>
#include <vector>

namespace leetcode {

template<typename ValueTy>
static constexpr aka::NodeNext<ValueTy>*
connect(aka::NodeNext<ValueTy>* root)
{
  if (!root)
    return nullptr;

  aka::NodeNext<ValueTy>* nextmost = root->next;
  while (nextmost && (!nextmost->left && !nextmost->right) && nextmost->next) {
    nextmost = nextmost->next;
  }

  if (root->right) {
    if (nextmost) {
      if (nextmost->left) {
        root->right->next = nextmost->left;
      } else {
        root->right->next = nextmost->right;
      }
    } else {
      root->right->next = nullptr;
    }
    connect(root->right);
  }

  if (root->left) {
    if (root->right) {
      root->left->next = root->right;
      connect(root->left);
    } else {
      if (nextmost) {
        if (nextmost->left) {
          root->left->next = nextmost->left;
        } else {
          root->left->next = nextmost->right;
        }
      } else {
        root->left->next = nullptr;
      }
      connect(root->left);
    }
  }
  return root;
}

} // namespace leetcode
