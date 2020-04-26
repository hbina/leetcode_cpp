#pragma once

#include <algorithm>
#include <numeric>
#include <string>
#include <vector>

namespace leetcode {

static auto
maxScore(const std::vector<int>& cardPoints, const int& k) -> int
{
  auto left_sum =
    std::accumulate(std::cbegin(cardPoints),
                    std::next(std::cbegin(cardPoints), k),
                    0,
                    [](int acc, const int& x) { return acc + x; });
  auto right_sum = 0;

  auto left_iter =
    std::make_reverse_iterator(std::next(std::cbegin(cardPoints), k));
  auto right_iter = std::rbegin(cardPoints);

  auto result = left_sum + right_sum;

  while (left_iter != std::rend(cardPoints)) {
    left_sum -= *left_iter;
    right_sum += *right_iter;
    result = std::max(result, left_sum + right_sum);

    // March
    left_iter = std::next(left_iter);
    right_iter = std::next(right_iter);
  }
  return result;
}

}
