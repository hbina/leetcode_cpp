#include <doctest/doctest.h>

#include "april_2020_challenge/day_17.hpp"

TEST_CASE("april 2020 day 17 1")
{
  const std::vector<std::vector<char>> input = {
    { '1', '1', '1', '1', '0' },
    { '1', '1', '0', '1', '0' },
    { '1', '1', '0', '0', '0' },
    { '0', '0', '0', '0', '0' },
  };
  const int expected = 1;
  const auto result = april2020::numIslands(input);
}

TEST_CASE("april 2020 day 17 2")
{
  const std::vector<std::vector<char>> input = {
    { '1', '1', '1', '1', '0' },
    { '1', '1', '0', '1', '0' },
    { '1', '1', '0', '0', '1' },
    { '0', '0', '1', '1', '1' },
  };
  const int expected = 2;
  const auto result = april2020::numIslands(input);
}

TEST_CASE("april 2020 day 17 2")
{
  const std::vector<std::vector<char>> input = { { '1' }, { '1' } };
  const int expected = 1;
  const auto result = april2020::numIslands(input);
}
