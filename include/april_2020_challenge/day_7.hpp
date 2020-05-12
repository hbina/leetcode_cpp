#pragma once

#include "util/generic/group_by_minify.hpp"

#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

namespace april2020 {

template<typename IterTy>
static auto
countElements(IterTy begin, IterTy end) -> int
{
  std::vector<int> tmp;
  std::copy(begin, end, std::back_inserter(tmp));
  std::sort(std::begin(tmp), std::end(tmp));
  auto grouped = akarithm::group_by_minify(
    std::cbegin(tmp), std::cend(tmp), std::equal_to{});
  int result = 0;
  for (auto iter = 0;
       iter < std::distance(std::cbegin(grouped), std::cend(grouped)) - 1;
       iter++) {
    auto lhs = std::next(std::cbegin(grouped), iter);
    auto rhs = std::next(std::cbegin(grouped), iter + 1);
    auto diff = (rhs->first) - (lhs->first);
    if (diff == 1) {
      result += static_cast<int>(lhs->second);
    }
  }
  return result;
}
}
