#pragma once

#include <cmath>
#include <iterator>
#include <type_traits>

namespace leetcode {

template<typename IterTy,
         typename TestFunction,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static constexpr auto
numSubseq(IterTy iter_begin,
          IterTy iter_end,
          const ValueTy& target,
          const TestFunction& fun) -> int
{
  if (iter_begin == iter_end) {
    return 0;
  }

  IterTy left = iter_begin;
  IterTy right = std::next(iter_begin);

  if (right == iter_end) {
    if (fun(*left, target)) {
      return 1;
    } else {
      return 0;
    }
  }

  std::size_t counter = fun(*left, target) ? 1 : 0;
  ValueTy current_sum = *left;

  while (left != iter_end) {
    if (left != right && right != iter_end) {
      if (fun(current_sum + *right, target)) {
        current_sum += *right;
        counter++;
        right = std::next(right);
      } else {
        current_sum -= *left;
        left = std::next(left);
      }
    } else if (left != right && right == iter_end) {
      while (left != iter_end) {
        current_sum -= *left;
        if (fun(current_sum, target)) {
          counter++;
        }
        left = std::next(left);
      }
    } else if (left == right) {
      right = std::next(right);
    }
  }

  return counter % static_cast<std::size_t>(std::pow(10, 6)) + 7;
}

template<typename IterTy,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static constexpr auto
numSubseq(IterTy iter_begin, IterTy iter_end, const ValueTy& target) -> int
{
  return numSubseq(iter_begin, iter_end, target, std::less{});
}

}
