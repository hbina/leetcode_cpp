#pragma once

#include "util/generic/zip.hpp"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

namespace leetcode {

template<typename IterTy>
std::vector<int>
shuffle(IterTy iter_begin, IterTy iter_end, const int n)
{
  // Prelude
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;
  const auto size = std::distance(iter_begin, iter_end);

  std::vector<int> result;
  result.reserve(size);

  akarithm::zip(iter_begin,
                std::next(iter_begin, n),
                std::next(iter_begin, n),
                iter_end,
                [&](const ValueTy& lhs, const ValueTy& rhs) {
                  result.emplace_back(lhs);
                  result.emplace_back(rhs);
                });

  return result;
}

}