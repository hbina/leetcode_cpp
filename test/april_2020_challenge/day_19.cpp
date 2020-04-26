#include "doctest/doctest.h"

#include "april_2020_challenge/day_19.hpp"

TEST_CASE("april 2020 day 19 1")
{
  const std::vector<int> input_1 = { 4, 5, 6, 7, 0, 1, 2 };
  const int input_2 = 0;
  const int expected = 4;
  const auto result =
    april2020::search(std::cbegin(input_1), std::cend(input_1), input_2);
}

TEST_CASE("april 2020 day 19 2")
{
  const std::vector<int> input_1 = { 4, 5, 6, 7, 0, 1, 2 };
  const int input_2 = 3;
  const int expected = -1;
  const auto result =
    april2020::search(std::cbegin(input_1), std::cend(input_1), input_2);
}
