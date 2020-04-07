#include "doctest/doctest.h"

#include "leetcode/problem_589.hpp"

TEST_CASE("problem_589 -- iterative")
{
    const leetcode::Node<> *input =
        new leetcode::Node<>(1,
                   {new leetcode::Node<>(3,
                               {new leetcode::Node<>(5),
                                new leetcode::Node<>(6)}),
                    new leetcode::Node<>(2),
                    new leetcode::Node<>(4)});
    const std::vector<int> expected = {1, 3, 5, 6, 2, 4};
    const std::vector<int> result = leetcode::preorder_iterative(input);
    CHECK(expected == result);
    delete input;
}

TEST_CASE("problem_589 -- recursive")
{
    const leetcode::Node<> *input =
        new leetcode::Node<>(1,
                   {new leetcode::Node<>(3,
                               {new leetcode::Node<>(5),
                                new leetcode::Node<>(6)}),
                    new leetcode::Node<>(2),
                    new leetcode::Node<>(4)});
    const std::vector<int> expected = {1, 3, 5, 6, 2, 4};
    const std::vector<int> result = leetcode::preorder_recursive(input);
    CHECK(expected == result);
    delete input;
}
