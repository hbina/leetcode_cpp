#include "doctest/doctest.h"

#include "leetcode/problem_145.hpp"

TEST_CASE("problem_145")
{
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(1,
                       nullptr,
                       new leetcode::TreeNode<>(
                           2,
                           new leetcode::TreeNode<>(
                               3,
                               nullptr,
                               nullptr),
                           nullptr));
    const std::vector<int> expected = {3, 2, 1};
    const std::vector<int> result = leetcode::postorderTraversal(input);
    CHECK(result == expected);
    delete input;
}
