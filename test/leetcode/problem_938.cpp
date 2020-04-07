#include "doctest/doctest.h"

#include "leetcode/problem_938.hpp"

TEST_CASE("problem_938")
{
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(10,
                       new leetcode::TreeNode<>(5,
                                      new leetcode::TreeNode<>(3),
                                      new leetcode::TreeNode<>(7)),
                       new leetcode::TreeNode<>(15,
                                      nullptr,
                                      new leetcode::TreeNode<>(18)));
    const int expected = 32;
    const int result = leetcode::rangeSumBST_recursion(input, 7, 15);
    CHECK(expected == result);
    delete input;
}
