#pragma once

#include "util/generic/find_range.hpp"

namespace leetcode {

template<typename IterTy>
static constexpr int
strStr(const IterTy haystack_begin,
       const IterTy haystack_end,
       const IterTy needle_begin,
       const IterTy needle_end)
{
  if (std::distance(needle_begin, needle_end) == 0) {
    return 0;
  }
  const IterTy result = aka::find_range(
    haystack_begin, haystack_end, needle_begin, needle_end);
  return result == haystack_end
           ? -1
           : static_cast<int>(std::distance(haystack_begin, result));
}

} // namespace leetcode
