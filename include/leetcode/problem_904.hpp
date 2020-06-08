#pragma once

#include "util/generic/fold.hpp"
#include "util/generic/group_by.hpp"
#include "util/generic/group_by_minify.hpp"
#include "util/generic/group_fold.hpp"
#include "util/generic/zip.hpp"
#include "util/generic/zip_fold.hpp"

#include <algorithm>
#include <functional>
#include <vector>

namespace leetcode {

template<typename IterTy,
         typename FreqTy = std::size_t,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static auto
totalFruit(IterTy iter_begin, IterTy iter_end) -> FreqTy
{
  using KeyTy = std::pair<ValueTy, ValueTy>;
  using FreqPairTy = std::pair<FreqTy, FreqTy>;
  using AdjDiffTy = std::pair<KeyTy, FreqPairTy>;
  using GroupTy = std::pair<ValueTy, FreqTy>;
  using AdjGroupTy = std::pair<KeyTy, ValueTy>;

  if (iter_begin == iter_end) {
    // Should return Result<ValueTy>
    throw std::runtime_error(
      "This function cannot operate when `iter_begin == iter_end`.");
  }

  std::vector<GroupTy> group_frequency =
    akarithm::group_by_minify(iter_begin, iter_end, std::equal_to{});

  if (group_frequency.size() == 1) {
    return group_frequency.back().second;
  }

  std::vector<AdjDiffTy> adjacent_difference = akarithm::zip_fold(
    std::cbegin(group_frequency),
    std::cend(group_frequency),
    std::next(std::cbegin(group_frequency)),
    std::cend(group_frequency),
    std::vector<AdjDiffTy>(std::size(group_frequency)),
    [](const GroupTy& lhs, const GroupTy& rhs) -> AdjDiffTy {
      auto& [lhs_value, lhs_freq] = lhs;
      auto& [rhs_value, rhs_freq] = rhs;
      return AdjDiffTy{ KeyTy{ lhs_value > rhs_value ? rhs_value : lhs_value,
                               lhs_value > rhs_value ? lhs_value : rhs_value },
                        FreqPairTy{ lhs_freq, rhs_freq } };
    },
    [](std::vector<AdjDiffTy>& acc,
       const AdjDiffTy& value) -> std::vector<AdjDiffTy> {
      acc.emplace_back(value);
      return acc;
    });

  std::vector<std::vector<FreqTy>> group_adjacent_difference_fold =
    akarithm::group_fold(
      std::cbegin(adjacent_difference),
      std::cend(adjacent_difference),
      [](const AdjDiffTy& lhs, const AdjDiffTy& rhs) -> bool {
        return lhs.first == rhs.first;
      },
      [](const std::vector<AdjDiffTy>& group) -> std::vector<FreqTy> {
        std::vector<FreqTy> group_adjacent_difference;
        group_adjacent_difference.reserve(group.size() + 1);

        for (const AdjDiffTy& x : group) {
          group_adjacent_difference.emplace_back(x.second.first);
        }
        group_adjacent_difference.emplace_back(group.back().second.second);
        return group_adjacent_difference;
      });

  std::vector<FreqTy> max_vectors = *std::max_element(
    std::cbegin(group_adjacent_difference_fold),
    std::cend(group_adjacent_difference_fold),
    [](const std::vector<FreqTy>& lhs, const std::vector<FreqTy>& rhs) -> bool {
      return std::accumulate(std::cbegin(lhs), std::cend(lhs), 0) <
             std::accumulate(std::cbegin(rhs), std::cend(rhs), 0);
    });

  return std::accumulate(std::cbegin(max_vectors), std::cend(max_vectors), 0);
}

template<typename IterTy,
         typename FreqTy = std::size_t,
         typename ValueTy = typename std::iterator_traits<IterTy>::value_type>
static auto
totalFruit_LinearTime(IterTy iter_begin, IterTy iter_end) -> FreqTy
{
  using GroupTy = std::pair<ValueTy, FreqTy>;

  if (iter_begin == iter_end) {
    // Should return Result<ValueTy>
    throw std::runtime_error(
      "This function cannot operate when `iter_begin == iter_end`.");
  }

  // TODO: The algorithm involves zipping 3 elements at a time.

  return {};
}

}
