#include "doctest/doctest.h"

#include <vector>

#include "april_2020_challenge/day_1.hpp"

TEST_CASE("april 2020 challenge day 1 1")
{
  const std::vector<int> input_1 = { 2, 2, 1 };
  const int expected = 1;
  const int result =
    april2020::singleNumber(std::cbegin(input_1), std::cend(input_1));
  CHECK(expected == result);
}

TEST_CASE("april 2020 challenge day 1 2")
{
  const std::vector<int> input_1 = { 4, 1, 2, 1, 2 };
  const int expected = 4;
  const int result =
    april2020::singleNumber(std::cbegin(input_1), std::cend(input_1));
  CHECK(expected == result);
}
