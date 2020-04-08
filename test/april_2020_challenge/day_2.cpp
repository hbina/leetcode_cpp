#include "doctest/doctest.h"

#include <vector>

#include "april_2020_challenge/day_2.hpp"

TEST_CASE("april 2020 challenge day 2 1") {
  const int input = 19;
  const bool expected = true;
  const bool result = april2020::isHappy(input);
  CHECK(expected == result);
}