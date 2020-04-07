#include "doctest/doctest.h"

#include "leetcode/problem_653.hpp"

TEST_CASE("problem 653 1")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(5,
                       new leetcode::TreeNode<>(3,
                                      new leetcode::TreeNode<>(2),
                                      new leetcode::TreeNode<>(4)),
                       new leetcode::TreeNode<>(6,
                                      nullptr,
                                      new leetcode::TreeNode<>(7)));
    const int input_2 = 9;
    const bool expected = true;
    const bool result = leetcode::findTarget(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem 653 2")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(2,
                       new leetcode::TreeNode<>(1),
                       new leetcode::TreeNode<>(3));
    const int input_2 = 3;
    const bool expected = true;
    const bool result = leetcode::findTarget(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem 653 3")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(2,
                       nullptr,
                       new leetcode::TreeNode<>(1));
    const int input_2 = 3;
    const bool expected = true;
    const bool result = leetcode::findTarget(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem 653 4")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(2,
                       new leetcode::TreeNode<>(1),
                       nullptr);
    const int input_2 = 3;
    const bool expected = true;
    const bool result = leetcode::findTarget(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem 653 5")
{
    const leetcode::TreeNode<> *input_1 = nullptr;
    const int input_2 = 3;
    const bool expected = false;
    const bool result = leetcode::findTarget(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem 653 6")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(2);
    const int input_2 = 3;
    const bool expected = false;
    const bool result = leetcode::findTarget(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem 653 7")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(0,
                       new leetcode::TreeNode<>(-1,
                                      new leetcode::TreeNode<>(-3),
                                      nullptr),
                       new leetcode::TreeNode<>(2,
                                      nullptr,
                                      new leetcode::TreeNode<>(4)));
    const int input_2 = -4;
    const bool expected = true;
    const bool result = leetcode::findTarget(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}

TEST_CASE("problem 653 8")
{
    const leetcode::TreeNode<> *input_1 =
        new leetcode::TreeNode<>(1);
    const int input_2 = 2;
    const bool expected = false;
    const bool result = leetcode::findTarget(input_1, input_2);
    CHECK(expected == result);
    delete input_1;
}
