#pragma once

#include "util/integer/digit_fold.hpp"

#include <functional>
#include <iostream>
#include <numeric>
#include <set>

namespace april2020 {

template<typename IntTy = int,
         typename = typename std::enable_if_t<std::is_integral_v<IntTy>>>
static constexpr auto
isHappy(IntTy n) -> bool
{
  std::set<IntTy> visited;
  // FIXME: There ought to be a solution that does not involve while loop.
  // Namely, there could be an input s.t. it produce unique keys each time.
  while (true) {
    n = akarithm::digit_fold(n, 0, [](const IntTy acc, const IntTy x) -> IntTy {
      return acc + x * x;
    });
    if (n == 1) {
      return true;
    } else {
      auto result = visited.insert(n);
      if (!result.second) {
        return false;
      }
    }
  }
}

} // namespace april2020
