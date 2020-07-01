#pragma once

#include <algorithm>
#include <cassert>
#include <numeric>
#include <string>
#include <vector>

namespace leetcode {

template<
  typename IterTy,
  typename ReturnType = typename std::iterator_traits<IterTy>::value_type>
static constexpr ReturnType
longestCommonPrefix(IterTy iter_begin, IterTy iter_end)
{
  return std::accumulate(
    iter_begin + 1,
    iter_end,
    (*iter_begin),
    [](const ReturnType& acc, const ReturnType& rhs) -> ReturnType {
      return ReturnType(
        acc.cbegin(),
        std::mismatch(acc.cbegin(), acc.cend(), rhs.cbegin(), rhs.cend())
          .first);
    });
}

} // namespace leetcode
