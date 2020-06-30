#pragma once

#include <iterator>
#include <set>
#include <string>

namespace leetcode {

template<typename IterTy>
static auto
isPathCrossing(IterTy iter_begin, IterTy iter_end) -> bool
{
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;
  using CoordTy = typename std::pair<int, int>;

  std::set<CoordTy> set;
  CoordTy current = { 0, 0 };

  set.insert(current);
  while (iter_begin != iter_end) {
    const ValueTy value = *iter_begin;

    switch (value) {
      case 'N': {
        current.second++;
        break;
      }
      case 'S': {
        current.second--;
        break;
      }
      case 'W': {
        current.first--;
        break;
      }
      case 'E': {
        current.first++;
        break;
      }
      default: {
        continue;
      }
    }

    if (set.find(current) != std::cend(set)) {
      return true;
    }

    set.insert(current);
    iter_begin = std::next(iter_begin);
  }

  return false;
}

}
