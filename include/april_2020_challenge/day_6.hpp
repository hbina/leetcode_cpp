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
    [](const std::vector<std::vector<std::string>>& acc, std::string x) {
      std::sort(std::begin(x), std::end(x));
      std::cout << "x:" << x << std::endl;
      return acc;
    });
}
}
