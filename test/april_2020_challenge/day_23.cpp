#include "doctest/doctest.h"

#include "april_2020_challenge/day_23.hpp"

TEST_CASE("april 2020 day 23 1")
{
  const int input_1 = 5;
  const int input_2 = 7;
  const int expected = 4;
  const auto result = april2020::rangeBitwiseAnd(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 23 2")
{
  const int input_1 = 0;
  const int input_2 = 1;
  const int expected = 0;
  const auto result = april2020::rangeBitwiseAnd(input_1, input_2);
  CHECK(expected == result);
}

