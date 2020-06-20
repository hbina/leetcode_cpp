#pragma once

#include <map>

namespace leetcode {

template<typename Iterable, typename ValueTy = int>
static constexpr ValueTy
romanToInt(Iterable s)
{
  // Prelude
  constexpr auto nums = [](const char x) -> ValueTy {
    switch (x) {
      case 'I':
        return 1;
      case 'V':
        return 5;
      case 'X':
        return 10;
      case 'L':
        return 50;
      case 'C':
        return 100;
      case 'D':
        return 500;
      case 'M':
        return 1000;
      default:
        return 0;
    }
  };

  ValueTy sum = 0;

  for (std::size_t iter = 0; iter < s.size(); iter++) {
    auto left = s[iter];
    auto right = s[iter + 1];
    if (nums(left) >= nums(right)) {
      sum += nums(left);
    } else {
      sum += nums(right) - nums(left);
      iter++;
    }
  }
  return sum;
}

} // namespace leetcode
