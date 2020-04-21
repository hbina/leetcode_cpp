#include "doctest/doctest.h"

#include "april_2020_challenge/day_6.hpp"

TEST_CASE("april 2020 day 5 1")
{
  const std::vector<std::string> input = { "eat", "tea", "tan",
                                           "ate", "nat", "bat" };
  const std::vector<std::vector<std::string>> expected = {
    { "ate", "eat", "tea" }, { "nat", "tan" }, { "bat" }
  };
  const auto result =
    april2020::groupAnagrams(std::cbegin(input), std::cend(input));
  CHECK(expected == result);
}
