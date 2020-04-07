#include "doctest/doctest.h"

#include "leetcode/problem_117.hpp"

TEST_CASE("problem_117")
{
    leetcode::NodeNext<> *input =
        new leetcode::NodeNext<>(1,
                       new leetcode::NodeNext<>(2,
                                      new leetcode::NodeNext<>(4,
                                                     nullptr,
                                                     nullptr,
                                                     nullptr),
                                      new leetcode::NodeNext<>(5,
                                                     nullptr,
                                                     nullptr,
                                                     nullptr),
                                      nullptr),

                       new leetcode::NodeNext<>(3,
                                      nullptr,
                                      new leetcode::NodeNext<>(7,
                                                     nullptr,
                                                     nullptr,
                                                     nullptr),
                                      nullptr),
                       nullptr);
    leetcode::NodeNext<> *expected_node_7 = new leetcode::NodeNext<>(7);
    leetcode::NodeNext<> *expected_node_5 =
        new leetcode::NodeNext<>(5,
                       nullptr,
                       nullptr,
                       expected_node_7);
    leetcode::NodeNext<> *expected_node_4 =
        new leetcode::NodeNext<>(4,
                       nullptr,
                       nullptr,
                       expected_node_5);
    leetcode::NodeNext<> *expected_node_3 =
        new leetcode::NodeNext<>(3,
                       nullptr,
                       expected_node_7,
                       nullptr);
    leetcode::NodeNext<> *expected_node_2 =
        new leetcode::NodeNext<>(2,
                       expected_node_4,
                       expected_node_5,
                       expected_node_3);
    const leetcode::NodeNext<> *expected =
        new leetcode::NodeNext<>(1,
                       expected_node_2,
                       expected_node_3,
                       nullptr);
    const leetcode::NodeNext<int> *result = leetcode::connect(input);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}
