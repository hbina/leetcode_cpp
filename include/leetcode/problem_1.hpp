#pragma once

#include "util/generic/group_by_minify.hpp"
#include "util/generic/sliding_window.hpp"

#include <algorithm>
#include <iterator>
#include <vector>

// TODO ::  Once group_minify is merged, consider using it instead.
namespace leetcode {

template<
  typename IterTy,
  typename ResultTy =
    std::vector<typename std::iterator_traits<IterTy>::value_type>,
  typename ValueTy = typename std::iterator_traits<IterTy>::value_type,
  typename IndexTy = typename std::iterator_traits<IterTy>::difference_type>
static constexpr auto
twoSum(IterTy iter_begin, IterTy iter_end, const ValueTy& target) -> ResultTy
{
  // Get the indices and sort based on the value its pointing to
  std::vector<IndexTy> indices;
  indices.resize(std::distance(iter_begin, iter_end));
  std::iota(std::begin(indices), std::end(indices), 0);
  std::sort(std::begin(indices),
            std::end(indices),
            [&](const IndexTy& lhs, const IndexTy& rhs) -> bool {
              return *std::next(iter_begin, lhs) < *std::next(iter_begin, rhs);
            });

  // Find the sum pair using sliding window
  auto [left, right] = akarithm::sliding_window(
    std::cbegin(indices),
    std::cend(indices),
    [&](const IndexTy& lhs, const IndexTy& rhs) -> bool {
      return *std::next(iter_begin, lhs) + *std::next(iter_begin, rhs) < target;
    },
    [&](const IndexTy& lhs, const IndexTy& rhs) -> bool {
      return *std::next(iter_begin, lhs) + *std::next(iter_begin, rhs) ==
             target;
    });
  return { static_cast<ValueTy>(*left), static_cast<ValueTy>(*right) };
}

} // namespace leetcode
