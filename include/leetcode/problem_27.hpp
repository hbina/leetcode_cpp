#pragma once

#include <algorithm>
#include <vector>

namespace leetcode {

template <typename Iterable,
          typename ValueTy = typename std::iterator_traits<
              typename Iterable::iterator>::value_type,
          typename DifferenceTy = typename std::iterator_traits<
              typename Iterable::iterator>::difference_type>
static constexpr auto removeElement(Iterable &nums, const ValueTy &val)
    -> DifferenceTy {
  return std::distance(std::begin(nums),
                       std::remove(std::begin(nums), std::end(nums), val));
}

} // namespace leetcode
