#pragma once

#include "util/generic/fold_each_n.hpp"

#include <cassert>
#include <utility>
#include <vector>

namespace leetcode {

template<typename IterTy,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static auto
decompressRLElist(IterTy iter_begin, IterTy iter_end) -> std::vector<int>
{
  return akarithm::fold_each_n<2>(
    iter_begin,
    iter_end,
    std::vector<ValueTy>{},
    [](std::vector<ValueTy> acc, const ValueTy& freq, const ValueTy& value) {
      acc.reserve(freq);
      for (int i = 0; i < freq; i++) {
        acc.emplace_back(value);
      }
      return acc;
    });
}

}
