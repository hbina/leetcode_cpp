#include "doctest/doctest.h"

#include "april_2020_challenge/day_4.hpp"

#include <vector>

TEST_CASE("april 2020 day 4 1") {
  std::vector<int> input = {0, 1, 0, 3, 12};
  april2020::moveZeroes(std::begin(input), std::end(input));
  std::vector<int> expected = {1, 3, 12, 0, 0};
  CHECK(expected == input);
}
