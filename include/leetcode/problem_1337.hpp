#pragma once

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

namespace leetcode {

template<typename ValueTy>
static constexpr auto
kWeakestRows(const std::vector<std::vector<ValueTy>>& mat, const ValueTy& k)
  -> std::vector<ValueTy>
{
  // Prelude
  constexpr auto count_soldier =
    [](const std::vector<std::vector<ValueTy>>& mat,
       const std::size_t& index) -> std::size_t {
    return std::distance(
      std::cbegin(mat[index]),
      std::find(std::cbegin(mat[index]), std::cend(mat[index]), 0));
  };

  std::vector<ValueTy> result;
  result.resize(mat.size());
  std::iota(std::begin(result), std::end(result), 0);

  std::stable_sort(std::begin(result),
                   std::end(result),
                   [&](const ValueTy& lhs, const ValueTy& rhs) -> bool {
                     return count_soldier(mat, lhs) < count_soldier(mat, rhs);
                   });
  result.resize(k);
  return result;
}

} // namespace leetcode
