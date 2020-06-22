#pragma once

#include <algorithm>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <vector>

namespace leetcode {

template<typename IterTy>
static auto
avoidFlood(IterTy iter_begin, IterTy iter_end) -> std::vector<int>
{
  using IndexTy = int;
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;
  using DiffType = typename std::iterator_traits<IterTy>::difference_type;

  std::vector<int> result;
  result.resize(std::distance(iter_begin, iter_end));
  std::fill(std::begin(result), std::end(result), -1);

  std::unordered_map<ValueTy, IndexTy> map;
  std::vector<IndexTy> coins;

  for (DiffType index = 0; index < std::distance(iter_begin, iter_end);
       index++) {
    ValueTy value = *std::next(iter_begin, index);
    if (value == 0) {
      coins.emplace_back(index);
    } else if (map.count(value)) {
      IndexTy begin_index = map[value];
      IndexTy end_index = index;

      auto found =
        std::upper_bound(std::cbegin(coins), std::cend(coins), begin_index);
      if (found == std::cend(coins)) {
        return {};
      } else {
        result[*found] = value;
        map[value] = end_index;
        coins.erase(found);
      }
    } else {
      map[value] = index;
    }
  }

  for (std::size_t index = 0; index < coins.size(); index++) {
    result[coins[index]] = 1;
  }

  return result;
}

}
