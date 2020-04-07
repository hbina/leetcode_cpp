#pragma once

#include <algorithm>
#include <vector>

namespace leetcode {

template <typename ValueTy>
static constexpr std::vector<ValueTy> sortedSquares(std::vector<ValueTy> &A) {
  std::for_each(A.begin(), A.end(), [](auto &x) -> void { x *= x; });
  std::sort(A.begin(), A.end(),
            [](const auto &lhs, const auto &rhs) -> bool { return lhs < rhs; });
  return A;
}

} // namespace leetcode
