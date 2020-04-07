#include "doctest/doctest.h"

#include "leetcode/problem_536.hpp"

TEST_CASE("problem_536")
{
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(1,
                       new leetcode::TreeNode<>(2,
                                      new leetcode::TreeNode<>(3),
                                      new leetcode::TreeNode<>(4)),
                       new leetcode::TreeNode<>(2,
                                      new leetcode::TreeNode<>(4),
                                      new leetcode::TreeNode<>(3)));
    bool expected = true;
    bool result = leetcode::isSymmetric(input);
    CHECK(expected == result);
    delete input;
}

TEST_CASE("problem_536")
{
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(1,
                       new leetcode::TreeNode<>(2,
                                      new leetcode::TreeNode<>(3),
                                      new leetcode::TreeNode<>(2)),
                       new leetcode::TreeNode<>(2,
                                      new leetcode::TreeNode<>(4),
                                      new leetcode::TreeNode<>(3)));
    const bool expected = false;
    bool result = leetcode::isSymmetric(input);
    CHECK(expected == result);
    delete input;
}

TEST_CASE("problem_536")
{
    const leetcode::TreeNode<> *input = new leetcode::TreeNode<>(1);
    const bool expected = true;
    bool result = leetcode::isSymmetric(input);
    CHECK(expected == result);
    delete input;
}

TEST_CASE("problem_536")
{
    const leetcode::TreeNode<> *input = nullptr;
    const bool expected = true;
    bool result = leetcode::isSymmetric(input);
    CHECK(expected == result);
}
