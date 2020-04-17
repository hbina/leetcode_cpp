#pragma once

#include <cassert>
#include <iostream>
#include <vector>

namespace leetcode {

template<typename ValueTy>
static constexpr double
findMaxAverage(const std::vector<ValueTy>& nums, const std::size_t& k)
{
  double sum_cache = 0.0;

  if (nums.empty()) {
    return 0.0;
  }

  if (nums.size() < k) {
    ValueTy sum = 0;
    for (const auto& a : nums) {
      sum += a;
    }
    return static_cast<double>(sum) / static_cast<double>(nums.size());
  }

  for (std::size_t a = 0; a < k; a++) {
    sum_cache += nums[a];
  }

  double max_average = sum_cache;

  for (std::size_t a = 1; a <= nums.size() - k; a++) {
    sum_cache = sum_cache - nums[a - 1] + nums[a + k - 1];

    if (sum_cache > max_average) {
      max_average = sum_cache;
    }
  }

  return max_average / k;
}

} // namespace leetcode
