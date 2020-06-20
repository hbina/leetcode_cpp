#pragma once

#include <algorithm>
#include <iterator>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <vector>

namespace april2020 {

static auto
minPathSum(const std::vector<std::vector<int>>& grid) -> int
{
  std::size_t m = grid.size();
  if (m > 0) {
    std::size_t n = grid[0].size();
    std::vector<std::vector<int>> dp(m, std::vector<int>(n, grid[0][0]));

    for (std::size_t x = 1; x < n; x++) {
      dp[0][x] = dp[0][x - 1] + grid[0][x];
    }

    for (std::size_t y = 1; y < m; y++) {
      dp[y][0] = dp[y - 1][0] + grid[y][0];
    }

    for (std::size_t y = 1; y < m; y++) {
      for (auto x = 1; x < n; x++) {
        dp[y][x] = grid[y][x] + std::min(dp[y - 1][x], dp[y][x - 1]);
      }
    }

    return dp[m - 1][n - 1];
  } else {
    return 0;
  }
}

}
