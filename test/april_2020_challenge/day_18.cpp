#include "doctest/doctest.h"

#include "april_2020_challenge/day_18.hpp"

TEST_CASE("april 2020 day 18 1")
{
  const std::vector<std::vector<int>> input = { { 1, 3, 1 },
                                                { 1, 5, 1 },
                                                { 4, 2, 1 } };
  const int expected = 7;
  const auto result = april2020::minPathSum(input);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 18 2")
{
  const std::vector<std::vector<int>> input = { { 1 } };
  const int expected = 1;
  const auto result = april2020::minPathSum(input);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 18 3")
{
  const std::vector<std::vector<int>> input = { { 1, 3 }, { 1, 5 } };
  const int expected = 7;
  const auto result = april2020::minPathSum(input);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 18 4")
{
  const std::vector<std::vector<int>> input;
  const int expected = 0;
  const auto result = april2020::minPathSum(input);
  CHECK(expected == result);
}
