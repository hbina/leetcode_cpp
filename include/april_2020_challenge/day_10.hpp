#pragma once

#include <iostream>
#include <iterator>
#include <stack>

namespace april2020 {

template<typename ValueTy = int>
class MinStack
{
public:
  std::stack<std::pair<ValueTy, ValueTy>> stack;

  void push(const ValueTy& x)
  {
    if (stack.empty()) {
      stack.push(std::make_pair(x, x));
    } else {
      stack.push(std::make_pair(x, std::min(x, stack.top().second)));
    }
  }

  void pop()
  {
    if (!stack.empty()) {
      stack.pop();
    }
  }

  ValueTy top() { return stack.top().first; }

  ValueTy getMin() { return stack.top().second; }
};

} // namespace april2020
