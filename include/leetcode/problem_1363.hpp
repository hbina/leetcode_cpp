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

template<typename IterTy>
static auto
largestMultipleOfThree_FastAndNoAllocation(IterTy iter_begin, IterTy iter_end)
  -> std::string
{
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;

  // Frequency map
  std::array<int, 10> ctmap =
    std::accumulate(iter_begin,
                    iter_end,
                    std::array<int, 10>{},
                    [](std::array<int, 10> ctmap, const ValueTy& digit) {
                      ctmap[digit]++;
                      return ctmap;
                    });

  // If the frequency of the digit is a multiple of 3,
  // then their summation are necessarily divisible by 3.
  const int one = ctmap[1] % 3;
  const int two = ctmap[2] % 3;
  const int four = ctmap[4] % 3;
  const int five = ctmap[5] % 3;
  const int seven = ctmap[7] % 3;
  const int eight = ctmap[8] % 3;

  // Based on the remainders of each digit, calculate created by each of the
  // remainders.
  const int extra =
    (one + 2 * two + 4 * four + 5 * five + 7 * seven + 8 * eight) % 3;

  // If the remainder is 1, then we try to find the smallest possible digit that
  // yields a remainder of 1 and remove them i.e. the digit 4 and 7 in that
  // order. If there are no such digits (i.e. the frequenct of 4 and 7 are
  // zero), then we try to find the smallest possible combinations of digits
  // that have a remainder of 2.
  // For example, `2 + 2 == 4` and `4 mod 3 == 1`. Therefore, its possible to
  // remove remainders of 1 by removing 2 remainders of 2.
  if (extra == 1) {
    if (ctmap[1] > 0)
      ctmap[1]--;
    else if (ctmap[4])
      ctmap[4]--;
    else if (ctmap[7])
      ctmap[7]--;
    else if (ctmap[2] > 1)
      ctmap[2] -= 2;
    else if (ctmap[2] > 0 && ctmap[5] > 0) {
      ctmap[2]--;
      ctmap[5]--;
    } else if (ctmap[5] > 1)
      ctmap[5] -= 2;
    else if (ctmap[8] > 0 && ctmap[2] > 0) {
      ctmap[8]--;
      ctmap[2]--;
    } else if (ctmap[8] > 0 && ctmap[5] > 0) {
      ctmap[8]--;
      ctmap[5]--;
    } else {
      ctmap[8] -= 2;
    }
  }

  // Same logic like `extra == 1` above.
  if (extra == 2) {
    if (ctmap[2] > 0)
      ctmap[2]--;
    else if (ctmap[5])
      ctmap[5]--;
    else if (ctmap[8])
      ctmap[8]--;
    else if (ctmap[1] > 1)
      ctmap[1] -= 2;
    else if (ctmap[1] > 0 && ctmap[4] > 0) {
      ctmap[1]--;
      ctmap[4]--;
    } else if (ctmap[4] > 1)
      ctmap[4] -= 2;
    else if (ctmap[7] > 0 && ctmap[1] > 0) {
      ctmap[7]--;
      ctmap[1]--;
    } else if (ctmap[7] > 0 && ctmap[4] > 0) {
      ctmap[7]--;
      ctmap[4]--;
    } else {
      ctmap[7] -= 2;
    }
  }

  std::string ans = "";
  ans.reserve(ctmap[9] + ctmap[8] + ctmap[7] + ctmap[6] + ctmap[5] + ctmap[4] +
              ctmap[3] + ctmap[2] + ctmap[1]);
  for (int i = 1; i <= ctmap[9]; i++)
    ans += '9';
  for (int i = 1; i <= ctmap[8]; i++)
    ans += '8';
  for (int i = 1; i <= ctmap[7]; i++)
    ans += '7';
  for (int i = 1; i <= ctmap[6]; i++)
    ans += '6';
  for (int i = 1; i <= ctmap[5]; i++)
    ans += '5';
  for (int i = 1; i <= ctmap[4]; i++)
    ans += '4';
  for (int i = 1; i <= ctmap[3]; i++)
    ans += '3';
  for (int i = 1; i <= ctmap[2]; i++)
    ans += '2';
  for (int i = 1; i <= ctmap[1]; i++)
    ans += '1';

  if (ans.length() != 0) {
    for (int i = 1; i <= ctmap[0]; i++) {
      ans += '0';
    }
  }

  if (ctmap[0] > 0 && ans == "") {
    ans = "0";
  }

  return ans;
}

}
