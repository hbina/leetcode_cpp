#include "doctest/doctest.h"

#include "april_2020_challenge/day_7.hpp"

TEST_CASE("april 2020 day 7 1")
{
  const std::vector<int> input = { 1, 2, 3 };
  const int expected = 2;
  const auto result =
    april2020::countElements(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 7 2")
{
  const std::vector<int> input = { 1, 1, 3, 3, 5, 5, 7, 7 };
  const int expected = 0;
  const auto result =
    april2020::countElements(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 7 3")
{
  const std::vector<int> input = { 1, 3, 2, 3, 5, 0 };
  const int expected = 3;
  const auto result =
    april2020::countElements(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 7 4")
{
  const std::vector<int> input = { 1, 1, 2, 2 };
  const int expected = 2;
  const auto result =
    april2020::countElements(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 7 5")
{
  const std::vector<int> input;
  const int expected = 0;
  const auto result =
    april2020::countElements(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
