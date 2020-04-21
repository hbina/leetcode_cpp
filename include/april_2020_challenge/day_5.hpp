#pragma once

#include <algorithm>
#include <numeric>
#include <vector>

namespace april2020 {

// TODO:: There ought to be a way to do this without allocating memory.
template<typename IterTy>
static auto
maxProfit(IterTy begin, IterTy end) -> int
{
  std::vector<int> adj_diff;
  adj_diff.reserve(std::distance(begin, end));
  std::adjacent_difference(
    begin,
    end,
    std::back_inserter(adj_diff),
    [](const int& lhs, const int& rhs) -> int { return lhs - rhs; });

  // Skip the first one because std::adjacent_difference defaults it to the
  // first value
  return std::accumulate(std::next(std::cbegin(adj_diff)),
                         std::cend(adj_diff),
                         0,
                         [](const int& acc, const int& x) {
                           if (x > 0) {
                             return acc + x;
                           } else {
                             return acc;
                           }
                         });
}
}
