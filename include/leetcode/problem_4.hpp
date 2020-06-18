#pragma once

#include <algorithm>
#include <iterator>
#include <vector>

namespace leetcode {

template<
  typename IterTyLhs,
  typename IterTyRhs,
  typename ValueTy = typename std::iterator_traits<IterTyLhs>::value_type,
  typename ValueTyRhs = typename std::iterator_traits<IterTyLhs>::value_type,
  typename = std::enable_if_t<std::is_same_v<ValueTy, ValueTyRhs>>>
static constexpr double
findMedianSortedArrays_basic(IterTyLhs iter_begin_lhs,
                             IterTyLhs iter_end_lhs,
                             IterTyRhs iter_begin_rhs,
                             IterTyRhs iter_end_rhs)
{
  std::vector<ValueTy> collection;
  collection.reserve(std::distance(iter_begin_lhs, iter_end_lhs) +
                     std::distance(iter_begin_rhs, iter_end_rhs));
  collection.insert(std::begin(collection), iter_begin_lhs, iter_end_lhs);
  collection.insert(std::begin(collection), iter_begin_rhs, iter_end_rhs);
  std::sort(std::begin(collection), std::end(collection));
  if (collection.size() % 2 == 0) {
    double left = collection[collection.size() / 2 - 1];
    double right = collection[collection.size() / 2];
    return (left + right) / 2;
  } else {
    return collection[static_cast<std::size_t>(collection.size() / 2)];
  }
}

template<typename ValueTy>
static constexpr double
findMedianSortedArrays_search(const std::vector<ValueTy>& nums1,
                              const std::vector<ValueTy>& nums2)
{
  //  TODO    ::  There are better ways to do this than to make a heap
  //  allocation
  //              of 2 possibly large vectors. Most of the allocations are
  //              wasted anyway, because we are dealing with medians of sorted
  //              arrays, all the information we need is in the middle.
  return 0.0f;
}
} // namespace leetcode
