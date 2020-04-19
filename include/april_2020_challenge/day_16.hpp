#pragma once

#include <iterator>
#include <numeric>
#include <stack>
#include <vector>

namespace april2020 {

template<typename IterTy>
static constexpr auto
checkValidString(IterTy begin, IterTy end) -> bool
{
  using IdxTy = typename std::iterator_traits<IterTy>::difference_type;
  
  std::stack<IdxTy> opens;
  std::stack<IdxTy> stars;

  // Run forward and clear as much as we can.
  auto len = std::distance(begin, end);
  for (IdxTy i = 0; i != len; i++) {
    auto c = *begin;
    begin = std::next(begin);
    switch (c) {
      case '(': {
        opens.push(i);
        break;
      }
      case ')': {
        if (!opens.empty()) {
          opens.pop();
        } else if (!stars.empty()) {
          stars.pop();
        } else {
          return false;
        }
        break;
      }
      case '*': {
        stars.push(i);
        break;
      }
      default: {
        return false;
      }
    }
  }

  // Clean up any openings left using stars.
  while (!opens.empty() && !stars.empty()) {
    auto top = stars.top();
    stars.pop();
    if (top > opens.top()) {
      opens.pop();
    }
  }
  return opens.empty();
}
}
