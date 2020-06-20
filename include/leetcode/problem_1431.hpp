#pragma once

#include <algorithm>
#include <numeric>
#include <vector>

namespace leetcode {

template<typename IterTy,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
std::vector<bool>
kidsWithCandies(IterTy iter_begin, IterTy iter_end, const ValueTy& extraCandies)
{
  const auto max = std::max_element(iter_begin, iter_end);
  if (max == iter_end) {
    return {};
  }
  std::vector<bool> result;
  result.reserve(std::distance(iter_begin, iter_end));

  while (iter_begin != iter_end) {
    result.emplace_back(*iter_begin + extraCandies >= *max);
    iter_begin++;
  }

  return result;
}

}
