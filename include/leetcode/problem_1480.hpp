#pragma once

#include <algorithm>
#include <iostream>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>

namespace leetcode {

static auto
runningSum(const std::vector<int>& nums) -> std::vector<int>
{
  std::vector<int> result;
  result.reserve(nums.size());
  std::partial_sum(
    std::cbegin(nums), std::cend(nums), std::back_inserter(result));
  return result;
}

}
