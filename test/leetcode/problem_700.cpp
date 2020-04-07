#include "doctest/doctest.h"

#include "leetcode/problem_700.hpp"

TEST_CASE("problem_700")
{
    leetcode::TreeNode<> *expected =
        new leetcode::TreeNode<>(2,
                       new leetcode::TreeNode<>(1),
                       new leetcode::TreeNode<>(3));
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(4,
                       expected,
                       new leetcode::TreeNode<>(7));
    const auto result = leetcode::searchBST(input, 2);
    CHECK(expected == result);
    delete input;
}
