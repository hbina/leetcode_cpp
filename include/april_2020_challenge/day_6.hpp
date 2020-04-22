#pragma once

#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

namespace april2020 {

template<typename IterTy,
         typename ReturnTy = typename std::vector<std::vector<std::string>>>
static auto
groupAnagrams(IterTy begin, const IterTy end) -> ReturnTy
{
  std::unordered_map<std::string, std::vector<std::string>> map;
  while (begin != end) {
    std::string t = *begin;
    std::sort(t.begin(), t.end());
    map[t].emplace_back(*begin);
    begin = std::next(begin);
  }
  std::vector<std::vector<std::string>> anagrams;
  for (const auto& p : map) {
    anagrams.emplace_back(p.second);
  }
  return anagrams;
}
}
