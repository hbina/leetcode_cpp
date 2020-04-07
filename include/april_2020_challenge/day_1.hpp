#pragma once

#include <functional>
#include <numeric>

namespace april2020 {

template <typename IterTy,
          typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static constexpr auto singleNumber(IterTy begin, IterTy end) -> ValueTy {
  return std::accumulate(begin, end, 0, std::bit_xor{});
}

} // namespace april2020
