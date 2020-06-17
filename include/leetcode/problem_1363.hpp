#pragma once

#include <algorithm>
#include <array>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

namespace leetcode {

template<typename IterTy,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static auto
largestMultipleOfThree(IterTy iter_begin, IterTy iter_end) -> std::string
{
  // Frequency map.
  std::array<std::vector<ValueTy>, 3> remainders;
  std::for_each(iter_begin, iter_end, [&](const ValueTy& x) {
    remainders[x % 3].emplace_back(x);
  });

  // Sort each frequency maps.
  std::for_each(
    std::begin(remainders), std::end(remainders), [](std::vector<ValueTy>& v) {
      std::sort(std::begin(v),
                std::end(v),
                [](const ValueTy& lhs, const ValueTy& rhs) -> bool {
                  return lhs > rhs;
                });
    });

  // Calculate remainder
  ValueTy remainder_1 =
    std::accumulate(std::cbegin(remainders[1]), std::cend(remainders[1]), 0);

  ValueTy remainder_2 =
    std::accumulate(std::cbegin(remainders[2]), std::cend(remainders[2]), 0);

  // Find what will the sum of the remainders yield as a remainder itself.
  ValueTy remainder_sum = remainder_1 + remainder_2;
  ValueTy remainder_of_remainder_sum = remainder_sum % 3;

  /////////////////////////////////////////////////////////////////////
  // This is the tricky part (at least programmatically).
  // We need to remove the smallest possible digit based on the
  // remainder. This naturally requires a deeply nested if-else logic.
  //
  // For example, if we have a remainder of remainders to be 23 and
  // the divisor is `u = 3`. Then the remainder will be `2`. We now want to
  // find the smallest digit that remainders to `2`. If there is no
  // no such digit, then we try to find the smallest 2 digits from
  // those that `mod` to `1`s.
  //
  // Notice that it will be very hard to generalize this logic
  // further to any other divisors `u`.
  /////////////////////////////////////////////////////////////////////

  // Remove the smallest digit that caused the non-zero remainder.
  // If no such digits exist, return an empty string.
  if (remainder_of_remainder_sum == 1) {
    if (remainders[1].empty()) {
      if (remainders[2].size() >= 2) {
        remainders[2].pop_back();
        remainders[2].pop_back();
      } else {
        return {};
      }
    } else {
      remainders[1].pop_back();
    }
  } else if (remainder_of_remainder_sum == 2) {
    if (remainders[2].empty()) {
      if (remainders[1].size() >= 2) {
        remainders[1].pop_back();
        remainders[1].pop_back();
      } else {
        return {};
      }
    } else {
      remainders[2].pop_back();
    }
  }

  // Pull out every digits from the frequency map, sort
  // them in descending order and filter out any zeros from
  // the left hand side.
  std::vector<ValueTy> result;
  result.reserve(std::accumulate(
    std::cbegin(remainders),
    std::cend(remainders),
    0,
    [](ValueTy acc, const std::vector<ValueTy>& x) { return acc + x.size(); }));

  std::for_each(std::cbegin(remainders),
                std::cend(remainders),
                [&](const std::vector<ValueTy>& x) {
                  std::copy(
                    std::cbegin(x), std::cend(x), std::back_inserter(result));
                });

  // If there are only zeroes, then its impossible then its useless.
  if (result.size() == 0) {
    return "";
  } else if (std::all_of(std::cbegin(result),
                         std::cend(result),
                         [](const ValueTy& x) -> bool { return x == 0; })) {
    return "0";
  } else {
    std::sort(
      std::begin(result),
      std::end(result),
      [](const ValueTy& lhs, const ValueTy& rhs) -> bool { return lhs > rhs; });

    std::string str;
    str.reserve(result.size());
    // FIXME: This operation could fail.
    // In particular, the given inputs could have non-digit values.
    std::for_each(std::cbegin(result),
                  std::cend(result),
                  [&](const ValueTy& x) { str.push_back(x + '0'); });
    return str;
  }
}

}
