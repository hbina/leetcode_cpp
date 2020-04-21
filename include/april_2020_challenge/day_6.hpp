#pragma once

#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

namespace april2020 {

template<typename IterTy>
std::vector<std::vector<std::string>>
groupAnagrams(IterTy begin, IterTy end)
{
  return std::accumulate(
    begin,
    end,
    std::vector<std::vector<std::string>>{},
    [](std::vector<std::vector<std::string>>& acc, const std::string& x) {
      auto sorted_x = x;
      std::sort(std::begin(sorted_x), std::end(sorted_x));
      auto find =
        std::find_if(std::begin(acc),
                     std::end(acc),
                     [&](const std::vector<std::string>& y) -> bool {
                       auto sorted_y = y.back();
                       std::sort(std::begin(sorted_y), std::end(sorted_y));
                       return sorted_x == sorted_y;
                     });
      if (find == std::cend(acc)) {
        // Cannot find any match
        acc.emplace_back(std::vector{ x });
      } else {
        // Match exists
        find->emplace_back(x);
      }
      return acc;
    });
}
}
