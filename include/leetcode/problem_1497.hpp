#pragma once

#include <algorithm>
#include <iterator>
#include <numeric>
#include <unordered_map>
#include <vector>

namespace leetcode {

template<typename IterTy,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static auto
canArrange(IterTy iter_begin, IterTy iter_end, const ValueTy& k) -> bool
{
  using FreqTy = std::size_t;

  // TODO: This kind of stuff ought to be a helper function already...
  // Avoid ITM anti-pattern.
  std::unordered_map<ValueTy, FreqTy> freq;
  while (iter_begin != iter_end) {
    const ValueTy value = *iter_begin % k;
    freq[value > 0 ? value : value + k]++;
    iter_begin = std::next(iter_begin);
  }
  freq[k] = freq[0];

  if (k % 2 == 0 && freq[k] % 2 != 0) {
    return false;
  }

  if (freq[0] % 2 != 0) {
    return false;
  }

  const bool result =
    std::accumulate(std::cbegin(freq),
                    std::cend(freq),
                    true,
                    [&](bool lhs, const std::pair<const ValueTy, FreqTy>& rhs) {
                      const ValueTy lhs_value = rhs.second;
                      const ValueTy rhs_value = freq[k - rhs.first];
                      return lhs && lhs_value == rhs_value;
                    });

  return result;
}

}
