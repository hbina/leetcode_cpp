#include <doctest/doctest.h>

#include "april_2020_challenge/day_12.hpp"

#include <vector>

TEST_CASE("april 2020 day 12 1")
{
  std::vector<int> input = { 2, 7, 4, 1, 8, 1 };
  const int expected = 1;
  const auto result =
    april2020::lastStoneWeight(std::begin(input), std::end(input));
  CHECK(expected == result);
}
