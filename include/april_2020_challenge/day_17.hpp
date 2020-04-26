#pragma once

#include <iterator>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <vector>

namespace april2020 {

// The type for this 2-dimensional array should have been a boolean...
// But std::vector<bool> is a nightmare...
static auto
numIslands(const std::vector<std::vector<char>>& grid) -> int
{
  // Prelude
  auto copy = grid;

  auto counter = 0;
  std::stack<std::pair<int, int>> plague;

  for (auto y = 0; y < copy.size(); ++y) {
    for (auto x = 0; x < copy[y].size(); ++x) {
      switch (copy[y][x]) {
        case '1': {
          counter++;
          plague.push(std::make_pair(x, y));
          break;
        }
        default: {
          break;
        }
      }

      while (!plague.empty()) {
        auto [x, y] = plague.top();
        plague.pop();
        copy[y][x] = '0';

        // Top
        if (y > 0 && copy[y - 1][x] == '1') {
          plague.emplace(x, y - 1);
        }
        // Left
        if (x > 0 && copy[y][x - 1] == '1') {
          plague.emplace(x - 1, y);
        }
        // Right
        if (x < copy[y].size() - 1 && copy[y][x + 1] == '1') {
          plague.emplace(x + 1, y);
        }
        // Bottom
        if (y < copy.size() - 1 && copy[y + 1][x] == '1') {
          plague.emplace(x, y + 1);
        }
      }
    }
  }

  return counter;
}
}
