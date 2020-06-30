#include <doctest/doctest.h>

#include "leetcode/problem_117.hpp"

TEST_CASE("problem_117")
{
  aka::NodeNext<>* input = new aka::NodeNext<>(
    1,
    new aka::NodeNext<>(
      2,
      new aka::NodeNext<>(4, nullptr, nullptr, nullptr),
      new aka::NodeNext<>(5, nullptr, nullptr, nullptr),
      nullptr),

    new aka::NodeNext<>(
      3,
      nullptr,
      new aka::NodeNext<>(7, nullptr, nullptr, nullptr),
      nullptr),
    nullptr);
  aka::NodeNext<>* expected_node_7 = new aka::NodeNext<>(7);
  aka::NodeNext<>* expected_node_5 =
    new aka::NodeNext<>(5, nullptr, nullptr, expected_node_7);
  aka::NodeNext<>* expected_node_4 =
    new aka::NodeNext<>(4, nullptr, nullptr, expected_node_5);
  aka::NodeNext<>* expected_node_3 =
    new aka::NodeNext<>(3, nullptr, expected_node_7, nullptr);
  aka::NodeNext<>* expected_node_2 = new aka::NodeNext<>(
    2, expected_node_4, expected_node_5, expected_node_3);
  const aka::NodeNext<>* expected =
    new aka::NodeNext<>(1, expected_node_2, expected_node_3, nullptr);
  const aka::NodeNext<int>* result = leetcode::connect(input);
  CHECK(*expected == *result);
  delete result;
  delete expected;
}
