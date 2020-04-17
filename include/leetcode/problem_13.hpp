#pragma once

#include <map>

namespace leetcode {

template<typename Iterable, typename ValueTy = int>
static constexpr ValueTy
romanToInt(const Iterable& s)
{
  ValueTy sum = 0;
  std::map<char, ValueTy> nums;

  nums['I'] = 1;
  nums['V'] = 5;
  nums['X'] = 10;
  nums['L'] = 50;
  nums['C'] = 100;
  nums['D'] = 500;
  nums['M'] = 1000;

  for (std::size_t iter = 0; iter < s.size(); iter++) {
    if (nums[s[iter]] >= nums[s[iter + 1]]) {
      sum += nums[s[iter]];
    } else {
      sum += nums[s[iter + 1]] - nums[s[iter]];
      iter++;
    }
  }
  return sum;
}

} // namespace leetcode
