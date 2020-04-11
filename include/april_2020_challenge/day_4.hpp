#pragma once

#include <algorithm>
#include <iterator>

namespace april2020 {

template <typename IterTy,
          typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static constexpr void moveZeroes(IterTy begin, IterTy end) {
  std::stable_partition(begin, end,
                        [](const ValueTy &x) -> bool { return x != 0; });
}

} // namespace april2020
