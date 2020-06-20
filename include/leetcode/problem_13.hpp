#pragma once

#include <iterator>

namespace leetcode {

template<
  typename ReturnTy = int,
  typename IterTy,
  typename SizeTy = typename std::iterator_traits<IterTy>::difference_type>
static constexpr ReturnTy
romanToInt(IterTy iter_begin, IterTy iter_end)
{
  // Prelude
  constexpr auto get = [](const IterTy& iter_begin,
                          const IterTy& iter_end,
                          const SizeTy& offset) -> ReturnTy {
    constexpr auto nums = [](const char& x) -> ReturnTy {
      switch (x) {
        case 'I':
          return 1;
        case 'V':
          return 5;
        case 'X':
          return 10;
        case 'L':
          return 50;
        case 'C':
          return 100;
        case 'D':
          return 500;
        case 'M':
          return 1000;
        default:
          return 0;
      }
    };

    const auto iter = std::next(iter_begin, offset);
    if (iter == iter_end) {
      return nums(0);
    } else {
      return nums(*iter);
    }
  };

  const SizeTy size = std::distance(iter_begin, iter_end);

  ReturnTy sum = 0;

  for (std::size_t iter = 0; iter < size; iter++) {
    auto left = get(iter_begin, iter_end, iter);
    auto right = get(iter_begin, iter_end, iter + 1);
    if (left >= right) {
      sum += left;
    } else {
      sum += right - left;
      iter++;
    }
  }
  return sum;
}

} // namespace leetcode
