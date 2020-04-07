#include "doctest/doctest.h"

#include "leetcode/problem_226.hpp"

TEST_CASE("problem__226")
{
    leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(4,
                       new leetcode::TreeNode<>(
                           2,
                           new leetcode::TreeNode<>(1),
                           new leetcode::TreeNode<>(3)),
                       new leetcode::TreeNode<>(7,
                                      new leetcode::TreeNode<>(6),
                                      new leetcode::TreeNode<>(9)));
    const leetcode::TreeNode<int> *expected =
        new leetcode::TreeNode<>(4,
                       new leetcode::TreeNode<>(
                           7,
                           new leetcode::TreeNode<>(9),
                           new leetcode::TreeNode<>(6)),
                       new leetcode::TreeNode<>(2,
                                      new leetcode::TreeNode<>(3),
                                      new leetcode::TreeNode<>(1)));
    const leetcode::TreeNode<> *result = leetcode::invertTree(input);
    CHECK(*expected == *result);
    delete expected;
    delete result;
}
