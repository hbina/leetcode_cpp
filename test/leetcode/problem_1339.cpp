#include "doctest/doctest.h"

#include "leetcode/problem_1339.hpp"

TEST_CASE("problem 5330 1")
{
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(1,
                       nullptr,
                       new leetcode::TreeNode<>(2,
                                      new leetcode::TreeNode<>(3),
                                      new leetcode::TreeNode<>(4,
                                                     new leetcode::TreeNode(5),
                                                     new leetcode::TreeNode<>(6))));
    const int expected = 90;
    // const int result = leetcode::maxProduct(input);
    // CHECK(expected == result);
}
