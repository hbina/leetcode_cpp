#pragma once

#include <algorithm>
#include <numeric>
#include <utility>

namespace april2020 {

template<typename IterTy>
static constexpr auto
maxSubArray(IterTy begin, IterTy end) -> int
{
  // Prelude
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;
  using PairTy = typename std::pair<int, int>;

  return std::accumulate(begin,
                         end,
                         std::make_pair(*std::min_element(begin, end), 0),
                         [](const PairTy& acc, const ValueTy& x) {
                           return std::make_pair(
                             std::max(acc.second + x, acc.first),
                             std::max(acc.second + x, 0));
                         })
    .first;
}
}
