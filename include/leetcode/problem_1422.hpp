#pragma once

#include <algorithm>
#include <numeric>
#include <string>

namespace leetcode {

static auto
maxScore(const std::string& s) -> int
{
  if (s.size() < 2)
    return 0;

  // Prelude
  using CharTy = typename std::string::value_type;

  auto ones = std::accumulate(
    std::next(std::cbegin(s)), std::cend(s), 0, [](int acc, const CharTy& x) {
      if (x == '1')
        acc++;
      return acc;
    });
  auto zeros = s[0] == '0' ? 1 : 0;

  return std::accumulate(std::next(std::cbegin(s)),
                         std::prev(std::cend(s)),
                         zeros + ones,
                         [&](int acc, const CharTy& x) {
                           switch (x) {
                             case '0': {
                               zeros++;
                               break;
                             }
                             case '1': {
                               ones--;
                               break;
                             }
                             default: {
                               break;
                             }
                           }
                           return std::max(zeros + ones, acc);
                         });
}

}
