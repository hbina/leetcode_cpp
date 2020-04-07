#include "doctest/doctest.h"

#include "leetcode/problem_537.hpp"

TEST_CASE("problem_537")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(5,
                       new leetcode::TreeNode<>(4,
                                      new leetcode::TreeNode<>(11,
                                                     new leetcode::TreeNode<>(7),
                                                     new leetcode::TreeNode<>(2)),
                                      nullptr),
                       new leetcode::TreeNode<>(8,
                                      new leetcode::TreeNode<>(13),
                                      new leetcode::TreeNode<>(4,
                                                     nullptr,
                                                     new leetcode::TreeNode<>(1))));
    const int input_2 = 22;
    const bool expected = true;
    const bool result = leetcode::hasPathSum(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem_537")
{
    const leetcode::TreeNode<> *input_1 = nullptr;
    const int input_2 = 1;
    const bool expected = false;
    const bool result = leetcode::hasPathSum(input_1, input_2);
    CHECK(expected == result);
}

TEST_CASE("problem_537 -- [1], 0 ==> false")
{
    const leetcode::TreeNode<> *input_1 = new leetcode::TreeNode<>(1);
    const int input_2 = 0;
    const bool expected = false;
    const bool result = leetcode::hasPathSum(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem_537 -- [1,2], 1 ==> true")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(1,
                       new leetcode::TreeNode<>(2),
                       nullptr);
    const int input_2 = 1;
    const bool expected = false;
    const bool result = leetcode::hasPathSum(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem_537 -- [-2,null, -3], -5 ==> true")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(-2,
                       nullptr,
                       new leetcode::TreeNode<>(-3));
    const int input_2 = -5;
    const bool expected = true;
    const bool result = leetcode::hasPathSum(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}
