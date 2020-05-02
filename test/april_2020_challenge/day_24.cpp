#include "doctest/doctest.h"

#include "april_2020_challenge/day_24.hpp"

TEST_CASE("april 2020 day 24 1")
{
  april2020::LRUCache cache(2);

  cache.put(1, 1);
  cache.put(2, 2);
  CHECK(1 == cache.get(1));
  cache.put(3, 3);
  CHECK(-1 == cache.get(2));
  cache.put(4, 4);
  CHECK(-1 == cache.get(1));
  CHECK(3 == cache.get(3));
  CHECK(4 == cache.get(4));
}

TEST_CASE("april 2020 day 24 2")
{
  april2020::LRUCache cache(1);

  cache.put(2, 1);
  CHECK(1 == cache.get(2));
}


TEST_CASE("april 2020 day 24 3")
{
  april2020::LRUCache cache(2);

  CHECK(-1 == cache.get(2));
  cache.put(2, 6);
  CHECK(-1 == cache.get(1));
  cache.put(1, 5);
  cache.put(1, 2);
  CHECK(2 == cache.get(1));
  CHECK(6 == cache.get(2));
}
