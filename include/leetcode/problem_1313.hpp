#pragma once

#include <cassert>
#include <utility>
#include <vector>

namespace leetcode {

template<typename F, typename AccTy, typename Iter, std::size_t... Is>
auto
call_n(const F& f, AccTy acc, Iter i, std::index_sequence<Is...>)
{
  return f(acc, *(i + Is)...);
}

template<unsigned int N,
         typename IterTy,
         typename AccTy,
         typename F,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static constexpr auto
fold_each_n(IterTy iter_begin, IterTy iter_end, AccTy acc, const F& f) -> AccTy
{
  assert(std::distance(iter_begin, iter_end) % N == 0);

  while (iter_begin != iter_end) {
    acc = std::move(call_n(f, acc, iter_begin, std::make_index_sequence<N>{}));
    iter_begin = std::next(iter_begin, N);
  }

  return acc;
}

template<typename IterTy,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static auto
decompressRLElist(IterTy iter_begin, IterTy iter_end) -> std::vector<int>
{
  return fold_each_n<2>(
    iter_begin,
    iter_end,
    std::vector<ValueTy>{},
    [](std::vector<ValueTy> acc, const ValueTy& freq, const ValueTy& value) {
      acc.reserve(freq);
      for (int i = 0; i < freq; i++) {
        acc.emplace_back(value);
      }
      return acc;
    });
}

}
