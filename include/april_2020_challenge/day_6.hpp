#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <string>
#include <vector>

namespace april2020 {

template<typename IterTy,
         typename ReturnTy = typename std::vector<std::vector<std::string>>>
static constexpr auto
groupAnagrams(const IterTy begin, const IterTy end) -> ReturnTy
{
  // Prelude
  using IndexTy = typename std::iterator_traits<IterTy>::difference_type;
  using KeyTy = typename std::array<int, 26>;
  using ValueTy = typename std::vector<IndexTy>;
  using CharTy = typename std::string::value_type;
  using PairTy = typename std::pair<const KeyTy, ValueTy>;

  std::map<KeyTy, ValueTy> map;
  auto iter = begin;
  while (iter != end) {
    KeyTy key = std::accumulate(std::cbegin(*iter),
                                std::cend(*iter),
                                KeyTy{},
                                [](KeyTy& acc, const CharTy& ch) {
                                  acc[ch - 'a']++;
                                  return acc;
                                });
    auto find = map.find(key);
    if (find == std::end(map)) {
      map.emplace(
        std::make_pair(key, std::vector{ std::distance(begin, iter) }));
    } else {
      find->second.emplace_back(std::distance(begin, iter));
    }
    iter = std::next(iter);
  }
  return std::accumulate(
    std::cbegin(map),
    std::cend(map),
    ReturnTy{},
    [&](ReturnTy& acc, const PairTy& x) {
      acc.emplace_back(
        std::accumulate(std::cbegin(x.second),
                        std::cend(x.second),
                        std::vector<std::string>{},
                        [&](std::vector<std::string>& acc, const IndexTy& idx) {
                          acc.emplace_back(*std::next(begin, idx));
                          return acc;
                        }));
      return acc;
    });
}
}
