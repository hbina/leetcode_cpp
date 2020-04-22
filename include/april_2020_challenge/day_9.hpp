#pragma once

#include <iostream>
#include <iterator>
#include <stack>

namespace april2020 {

// There is a O(1) memory solution using a reverse iterator but its quite tricky
// to write.
template<typename IterTy>
static constexpr auto
backspaceCompare(IterTy beginS, IterTy endS, IterTy beginT, IterTy endT) -> bool
{
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;

  auto create_stack = [](IterTy begin, IterTy end) {
    std::stack<ValueTy> words;
    while (begin != end) {
      switch (*begin) {
        case '#': {
          if (!words.empty())
            words.pop();
          break;
        }
        default: {
          words.push(*begin);
          break;
        }
      }
      begin = std::next(begin);
    }
    return words;
  };

  return create_stack(beginS, endS) == create_stack(beginT, endT);
}

} // namespace april2020
