#include "doctest/doctest.h"

#include "april_2020_challenge/day_10.hpp"

TEST_CASE("april 2020 day 10 1")
{
  april2020::MinStack minStack;
  minStack.push(-2);
  minStack.push(0);
  minStack.push(-3);
  CHECK(-3 == minStack.getMin());
  minStack.pop();
  CHECK(0 == minStack.top());
  CHECK(-2 == minStack.getMin());
}
