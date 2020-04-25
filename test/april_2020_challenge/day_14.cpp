#include "doctest/doctest.h"

#include "april_2020_challenge/day_14.hpp"

#include <vector>

TEST_CASE("april 2020 day 14 1")
{
  const std::string input_1 = "abc";
  const std::vector<std::vector<int>> input_2 = { { 0, 1 }, { 1, 2 } };
  const std::string expected = "cab";
  const auto result = april2020::stringShift(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 14 2")
{
  const std::string input_1 = "wpdhhcj";
  const std::vector<std::vector<int>> input_2 = { { 0, 7 }, { 1, 7 }, { 1, 0 },
                                                  { 1, 3 }, { 0, 3 }, { 0, 6 },
                                                  { 1, 2 } };
  const std::string expected = "hcjwpdh";
  const auto result = april2020::stringShift(input_1, input_2);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 14 2")
{
  const std::string input_1 = "xqgwkiqpif";
  const std::vector<std::vector<int>> input_2 = { { 1, 4 }, { 0, 7 }, { 0, 8 },
                                                  { 0, 7 }, { 0, 6 }, { 1, 3 },
                                                  { 0, 1 }, { 1, 7 }, { 0, 5 },
                                                  { 0, 6 } };
  const std::string expected = "qpifxqgwki";
  const auto result = april2020::stringShift(input_1, input_2);
  CHECK(expected == result);
}
