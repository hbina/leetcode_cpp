#pragma once

#include <functional>
#include <numeric>
#include <vector>

namespace leetcode {

template <typename ValueTy>
static constexpr ValueTy subtractProductAndSum(const ValueTy &input) {
  ValueTy n = input;
  std::vector<ValueTy> collection;
  while (n) {
    ValueTy tmp = n % 10;
    collection.emplace_back(tmp);
    n /= 10;
  }

  return std::accumulate(collection.begin(), collection.end(), 1,
                         std::multiplies<ValueTy>()) -
         std::accumulate(collection.begin(), collection.end(), 0);
}

} // namespace leetcode
