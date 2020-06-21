#pragma once

#include <algorithm>
#include <iterator>
#include <numeric>
#include <queue>
#include <unordered_map>
#include <vector>

namespace april2020 {

template<typename ResultTy = int, typename IterTy>
static constexpr auto
findMaxLength(IterTy begin, IterTy end) -> ResultTy
{
  // Prelude
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;
  using IndexTy = typename std::iterator_traits<IterTy>::difference_type;
  using CountTy = int;
  using MapTy =
    typename std::unordered_map<CountTy, std::pair<IndexTy, IndexTy>>;
  using PairTy = typename std::pair<const CountTy, std::pair<IndexTy, IndexTy>>;

  CountTy counter = 0;
  MapTy map;
  map.emplace(std::make_pair(0, std::make_pair(0, 0)));

  auto iter = begin;
  while (iter != end) {
    auto distance = std::distance(begin, iter) + 1;
    switch (*iter) {
      case 0: {
        counter++;
        break;
      }
      case 1: {
        counter--;
        break;
      }
      default: {
        break;
      }
    }
    auto find = map.find(counter);
    if (find == std::cend(map)) {
      map.emplace(std::make_pair(counter, std::make_pair(distance, distance)));
    } else {
      find->second.second = std::max(find->second.second, distance);
    }
    iter = std::next(iter);
  }

  constexpr auto length = [](const PairTy& pair) -> ResultTy {
    return static_cast<ResultTy>(pair.second.second - pair.second.first);
  };

  return length(
    *std::max_element(std::cbegin(map),
                      std::cend(map),
                      [&](const PairTy& lhs, const PairTy& rhs) -> bool {
                        return length(lhs) < length(rhs);
                      }));
}

} // namespace april2020
