#pragma once

#include <iterator>

namespace april2020 {

template<typename IterTy>
static constexpr auto
backspaceCompare(IterTy beginS, IterTy endS, IterTy beginT, IterTy endT) -> bool
{
  using RiterTy = decltype(std::make_reverse_iterator(beginS));
  RiterTy rbeginS = std::make_reverse_iterator(endS);
  RiterTy rendS = std::make_reverse_iterator(beginS);
  RiterTy rbeginT = std::make_reverse_iterator(endT);
  RiterTy rendT = std::make_reverse_iterator(beginT);

  auto find_next = [](RiterTy begin, RiterTy end) -> RiterTy {
    auto pound_counter = 0;
    while (begin != end && *begin == '#') {
      pound_counter++;
    }
    while (begin != end && pound_counter != 0) {
      pound_counter--;
      begin = std::next(begin);
    }
    return begin;
  };

  while (rbeginS != rendS && rbeginT != rendT) {
  }
  return true;
}

} // namespace april2020
