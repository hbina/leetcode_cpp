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
        auto [inner_x, inner_y] = plague.top();
        plague.pop();
        copy[inner_y][inner_x] = '0';

        // Top
        if (inner_y > 0 && copy[inner_y - 1][inner_x] == '1') {
          plague.emplace(inner_x, inner_y - 1);
        }
        // Left
        if (inner_x > 0 && copy[inner_y][inner_x - 1] == '1') {
          plague.emplace(inner_x - 1, inner_y);
        }
        // Right
        if (inner_x < copy[inner_y].size() - 1 &&
            copy[inner_y][inner_x + 1] == '1') {
          plague.emplace(inner_x + 1, inner_y);
        }
        // Bottom
        if (inner_y < copy.size() - 1 && copy[inner_y + 1][inner_x] == '1') {
          plague.emplace(inner_x, inner_y + 1);
        }
      }
    }
  }

  return counter;
}
}
