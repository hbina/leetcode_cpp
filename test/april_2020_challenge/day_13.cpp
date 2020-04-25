#include "doctest/doctest.h"

#include "april_2020_challenge/day_13.hpp"

#include <vector>

TEST_CASE("april 2020 day 13 1")
{
  std::vector<int> input = { 0, 1 };
  const int expected = 2;
  const auto result =
    april2020::findMaxLength(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 13 2")
{
  std::vector<int> input = { 0, 1, 0 };
  const int expected = 2;
  const auto result =
    april2020::findMaxLength(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
