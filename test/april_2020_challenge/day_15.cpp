#include "doctest/doctest.h"

#include "april_2020_challenge/day_15.hpp"

#include <vector>

TEST_CASE("april 2020 day 15 1")
{
  const std::vector<int> input = { 1, 2, 3, 4 };
  const std::vector<int> expected = { 24, 12, 8, 6 };
  const auto result =
    april2020::productExceptSelf(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
