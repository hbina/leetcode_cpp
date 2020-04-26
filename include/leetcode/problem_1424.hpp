#pragma once

#include <algorithm>
#include <iostream>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>

namespace leetcode {

// TODO: The performance of this can be improved if we use unordered_set
static auto
findDiagonalOrder(const std::vector<std::vector<int>>& nums) -> std::vector<int>
{
  auto total_size = std::accumulate(
    std::cbegin(nums),
    std::cend(nums),
    0,
    [](auto acc, const std::vector<int>& x) { return acc + x.size(); });

  std::vector<int> result;
  result.reserve(total_size);

  std::queue<std::pair<int, int>> next;
  std::set<std::pair<int, int>> visited;
  next.emplace(0, 0);

  while (!next.empty()) {
    auto [x, y] = next.front();
    next.pop();

    result.emplace_back(nums[y][x]);

    if (y < nums.size() - 1 && x < nums[y + 1].size()) {
      auto btm = std::make_pair(x, y + 1);
      if (visited.find(btm) == std::cend(visited)) {
        next.emplace(btm);
        visited.emplace(btm);
      }
    }

    if (x < nums[y].size() - 1) {
      auto right = std::make_pair(x + 1, y);
      if (visited.find(right) == std::cend(visited)) {
        next.emplace(right);
        visited.emplace(right);
      }
    }
  }

  return result;
}

}
