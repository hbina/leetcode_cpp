#include <doctest/doctest.h>

#include "leetcode/problem_297.hpp"

TEST_CASE("problem_297")
{
    leetcode::TreeNode<int> *input = new leetcode::TreeNode<>(
        1,
        new leetcode::TreeNode<>(2),
        new leetcode::TreeNode<>(3,
                       new leetcode::TreeNode<>(4),
                       new leetcode::TreeNode<>(5)));
    // leetcode::TreeNode<int> *result = Codec<int>::deserialize(Codec<int>::serialize(input));
    // CHECK(*input == *result);
    delete input;
    // delete result;
}
