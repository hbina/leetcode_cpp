#include "doctest/doctest.h"

#include "leetcode/problem_106.hpp"

TEST_CASE("problem_106")
{
    const std::vector<int> input_1 = {9, 3, 15, 20, 7};
    const std::vector<int> input_2 = {9, 15, 7, 20, 3};
    const leetcode::TreeNode<> *expected =
        new leetcode::TreeNode<>(3,
                       new leetcode::TreeNode<>(9),
                       new leetcode::TreeNode<>(20,
                                      new leetcode::TreeNode<>(15),
                                      new leetcode::TreeNode<>(7)));
    const leetcode::TreeNode<int> *result = leetcode::buildTreeInPost(input_1, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}
