#include "doctest/doctest.h"

#include "leetcode/problem_889.hpp"

TEST_CASE("problem_889")
{
    const std::vector<int> input_1 = {1, 2, 4, 5, 3, 6, 7};
    const std::vector<int> input_2 = {4, 5, 2, 6, 7, 3, 1};
    const leetcode::TreeNode<> *expected =
        new leetcode::TreeNode<>(1,
                       new leetcode::TreeNode<>(2,
                                      new leetcode::TreeNode<>(4),
                                      new leetcode::TreeNode<>(5)),
                       new leetcode::TreeNode<>(3,
                                      new leetcode::TreeNode<>(6),
                                      new leetcode::TreeNode<>(7)));
    const leetcode::TreeNode<> *result = leetcode::constructFromPrePost(input_1, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}
