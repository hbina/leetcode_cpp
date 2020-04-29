#pragma once

#include <algorithm>
#include <iostream>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <vector>

namespace april2020 {

// FIXME: Put template information that value_type of IterTy is convertible to
// ValueTy
template<typename IterTy, typename ValueTy>
static auto
subarraySum(IterTy begin_iter, IterTy end_iter, const ValueTy& k) -> int
{
  auto len = std::distance(begin_iter, end_iter);

  std::vector<int> dp;
  dp.reserve(len + 1);
  dp.push_back(0);
  std::partial_sum(begin_iter, end_iter, std::back_insert_iterator(dp));

  auto result = 0;
  for (auto begin_index = 0; begin_index < len; begin_index++) {
    for (auto end_index = begin_index + 1; end_index <= len; end_index++) {
      if (dp[end_index] - dp[begin_index] == k)
        result++;
    }
  }

  return result;
}

}
