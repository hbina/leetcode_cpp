#pragma once

#include <numeric>
#include <string>
#include <vector>

namespace april2020 {

static auto
checkValidString(const std::string& s) -> bool
{
  // Optimize later to use std::array
  std::vector<std::vector<int>> dp = { { 0 } };

  for (auto c : s) {
    dp.emplace_back(dp.back());
    switch (c) {
      case '(': {
        for (auto d : dp.back()) {
          d++;
        }
        break;
      }
      case ')': {
        for (auto d : dp.back()) {
          d--;
        }
        break;
      }
      case '*': {
        dp.back().push_back(dp.back().front() - 1);
        dp.back().push_back(dp.back().back() + 1);
        break;
      }
      default: {
        return false;
      }
    }
  }
  return std::accumulate(
    std::cbegin(dp.back()),
    std::cend(dp.back()),
    false,
    [](bool acc, const int& x) -> bool { return acc || x == 0; });
}
}
