#include "doctest/doctest.h"

#include "april_2020_challenge/day_9.hpp"

TEST_CASE("april 2020 day 9 1")
{
  const std::string input_1 = "ab#c";
  const std::string input_2 = "ad#c";
  const bool expected = true;
  const auto result = april2020::backspaceCompare(std::cbegin(input_1),
                                                  std::cend(input_1),
                                                  std::cbegin(input_2),
                                                  std::cend(input_2));
  CHECK(result == expected);
}

TEST_CASE("april 2020 day 9 2")
{
  const std::string input_1 = "ab##";
  const std::string input_2 = "c#d#";
  const bool expected = true;
  const auto result = april2020::backspaceCompare(std::cbegin(input_1),
                                                  std::cend(input_1),
                                                  std::cbegin(input_2),
                                                  std::cend(input_2));
  CHECK(result == expected);
}

TEST_CASE("april 2020 day 9 3")
{
  const std::string input_1 = "a##c";
  const std::string input_2 = "#a#c";
  const bool expected = true;
  const auto result = april2020::backspaceCompare(std::cbegin(input_1),
                                                  std::cend(input_1),
                                                  std::cbegin(input_2),
                                                  std::cend(input_2));
  CHECK(result == expected);
}

TEST_CASE("april 2020 day 9 4")
{
  const std::string input_1 = "a#c";
  const std::string input_2 = "b";
  const bool expected = false;
  const auto result = april2020::backspaceCompare(std::cbegin(input_1),
                                                  std::cend(input_1),
                                                  std::cbegin(input_2),
                                                  std::cend(input_2));
  CHECK(result == expected);
}