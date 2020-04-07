#include "doctest/doctest.h"

#include "leetcode/problem_897.hpp"

TEST_CASE("problem_897")
{
    leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(5,
                       new leetcode::TreeNode<>(3,
                                      new leetcode::TreeNode<>(2,
                                                     new leetcode::TreeNode<>(1),
                                                     nullptr),
                                      new leetcode::TreeNode<>(4)),
                       new leetcode::TreeNode<>(6,
                                      nullptr,
                                      new leetcode::TreeNode<>(8,
                                                     new leetcode::TreeNode<>(7),
                                                     new leetcode::TreeNode<>(9))));
    const leetcode::TreeNode<> *expected =
        new leetcode::TreeNode<>(1,
                       nullptr,
                       new leetcode::TreeNode<>(2,
                                      nullptr,
                                      new leetcode::TreeNode<>(3,
                                                     nullptr,
                                                     new leetcode::TreeNode<>(4,
                                                                    nullptr,
                                                                    new leetcode::TreeNode<>(5,
                                                                                   nullptr,
                                                                                   new leetcode::TreeNode<>(6,
                                                                                                  nullptr,
                                                                                                  new leetcode::TreeNode<>(7,
                                                                                                                 nullptr,
                                                                                                                 new leetcode::TreeNode<>(8,
                                                                                                                                nullptr,
                                                                                                                                new leetcode::TreeNode<>(9)))))))));
    delete input;
    delete expected;
}
