#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>

namespace april2020 {

// FIXME: This should really be arrays of pairs...
static auto
stringShift(const std::string& s, const std::vector<std::vector<int>>& shift)
  -> std::string
{
  auto result = std::accumulate(std::cbegin(shift),
                                std::cend(shift),
                                int{},
                                [](int acc, const std::vector<int>& x) {
                                  switch (x.front()) {
                                    case 0: {
                                      acc -= x.back();
                                      break;
                                    }
                                    case 1: {
                                      acc += x.back();
                                      break;
                                    }
                                    default: {
                                      break;
                                    }
                                  }
                                  return acc;
                                });
  if (result > 0) {
    result %= s.size();
    std::string s1 = s.substr(s.size() - result, s.size());
    std::string s2 = s.substr(0, s.size() - result);
    return s1 + s2;
  } else {
    result *= -1;
    result %= s.size();
    std::string s1 = s.substr(result, s.size());
    std::string s2 = s.substr(0, result);
    return s1 + s2;
  }
}
} // namespace april2020
