#include <doctest/doctest.h>

#include "april_2020_challenge/day_5.hpp"

TEST_CASE("april 2020 day 5 1")
{
  const std::vector<int> input = { 7, 1, 5, 3, 6, 4 };
  const int expected = 7;
  const auto result =
    april2020::maxProfit(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
