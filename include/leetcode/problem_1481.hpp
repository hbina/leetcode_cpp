#pragma once

#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>

namespace leetcode {

template<typename IterTy>
static auto
findLeastNumOfUniqueInts(IterTy iter_begin, IterTy iter_end, int k) -> int
{
  std::unordered_map<int, uint32_t> freq;
  std::for_each(iter_begin, iter_end, [&](const int& x) { freq[x]++; });

  std::vector<int> result;
  result.reserve(freq.size());

  for (const auto& x : freq) {
    result.emplace_back(x.second);
  }

  std::sort(std::begin(result),
            std::end(result),
            [](const int& lhs, const int& rhs) -> bool { return rhs > lhs; });

  int counter = 0;
  for (const int& x : result) {
    if (x > k) {
      break;
    } else {
      k -= x;
      counter++;
    }
  }

  return result.size() - counter;
}

}
