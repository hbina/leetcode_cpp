#include "doctest/doctest.h"

#include "leetcode/problem_107.hpp"

TEST_CASE("problem_107")
{
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(3,
                       new leetcode::TreeNode<>(9),
                       new leetcode::TreeNode<>(20,
                                      new leetcode::TreeNode<>(15),
                                      new leetcode::TreeNode<>(7)));
    const std::vector<std::vector<int>> expected = {
        {3},
        {9, 20},
        {15, 7}};
    const std::vector<std::vector<int>> result = leetcode::levelOrderBottom(input);
    CHECK(expected == result);
    delete input;
}
