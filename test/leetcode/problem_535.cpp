#include "doctest/doctest.h"

#include "leetcode/problem_535.hpp"

TEST_CASE("problem_535")
{
    const leetcode::TreeNode<> input = leetcode::TreeNode<>(
        3,
        new leetcode::TreeNode<>(9),
        new leetcode::TreeNode<>(20,
                       new leetcode::TreeNode<>(15),
                       new leetcode::TreeNode<>(7)));
    int expected = 3;
    CHECK(expected == leetcode::maxDepth(&input));
}

TEST_CASE("problem_535")
{
    const leetcode::TreeNode<> input = leetcode::TreeNode<>(3);
    int expected = 1;
    CHECK(expected == leetcode::maxDepth(&input));
}

TEST_CASE("problem_535")
{
    leetcode::TreeNode<> *input = nullptr;
    int expected = 0;
    CHECK(expected == leetcode::maxDepth(input));
}

TEST_CASE("problem_535")
{
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(3,
                       nullptr,
                       new leetcode::TreeNode<>(20,
                                      nullptr,
                                      new leetcode::TreeNode<>(7,
                                                     nullptr,
                                                     new leetcode::TreeNode<>(7))));
    const int expected = 4;
    const int result = static_cast<int>(leetcode::maxDepth(input));
    CHECK(expected == result);
    delete input;
}
