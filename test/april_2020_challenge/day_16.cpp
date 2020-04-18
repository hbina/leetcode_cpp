#include "doctest/doctest.h"

#include "april_2020_challenge/day_16.hpp"
#include "data_structure/list_node.hpp"

TEST_CASE("april 2020 day 16 1")
{
  const std::string input_1 = "()";
  const bool expected = true;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 16 2")
{
  const std::string input_1 = "(*)";
  const bool expected = true;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 16 3")
{
  const std::string input_1 = "(*))";
  const bool expected = true;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 16 4")
{
  const std::string input_1 = "(";
  const bool expected = false;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 16 5")
{
  const std::string input_1 = ")";
  const bool expected = false;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 16 6")
{
  const std::string input_1 = "";
  const bool expected = true;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 16 7")
{
  const std::string input_1 = "(*()";
  const bool expected = true;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 16 8")
{
  const std::string input_1 = "(((******))";
  const bool expected = true;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

TEST_CASE("april 2020 day 16 9")
{
  const std::string input_1 = "((*)(*))((*";
  const bool expected = true;
  const bool result = april2020::checkValidString(input_1);
  CHECK(expected == result);
}

