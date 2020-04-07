#include "doctest/doctest.h"

#include "leetcode/problem_1038.hpp"

TEST_CASE("problem_1038")
{
    leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(4,
                       new leetcode::TreeNode<>(1,
                                      new leetcode::TreeNode<>(0),
                                      new leetcode::TreeNode<>(2,
                                                     nullptr,
                                                     new leetcode::TreeNode<>(3))),
                       new leetcode::TreeNode<>(6,
                                      new leetcode::TreeNode<>(5),
                                      new leetcode::TreeNode<>(7,
                                                     nullptr,
                                                     new leetcode::TreeNode<>(8))));
    const leetcode::TreeNode<> *expected =
        new leetcode::TreeNode<>(30,
                       new leetcode::TreeNode<>(36,
                                      new leetcode::TreeNode<>(36),
                                      new leetcode::TreeNode<>(35,
                                                     nullptr,
                                                     new leetcode::TreeNode<>(33))),
                       new leetcode::TreeNode<>(21,
                                      new leetcode::TreeNode<>(26),
                                      new leetcode::TreeNode<>(15,
                                                     nullptr,
                                                     new leetcode::TreeNode<>(8))));
    const leetcode::TreeNode<> *result = leetcode::bstToGst(input);
    CHECK(*expected == *result);
    delete expected;
    delete result;
}

TEST_CASE("problem_1038")
{
    leetcode::TreeNode<double> *input =
        new leetcode::TreeNode<double>(4.0,
                       new leetcode::TreeNode<double>(1.0,
                                      new leetcode::TreeNode<double>(0.0),
                                      new leetcode::TreeNode<double>(2.0,
                                                     nullptr,
                                                     new leetcode::TreeNode<double>(3.0))),
                       new leetcode::TreeNode<double>(6.0,
                                      new leetcode::TreeNode<double>(5.0),
                                      new leetcode::TreeNode<double>(7.0,
                                                     nullptr,
                                                     new leetcode::TreeNode<double>(8.0))));
    const leetcode::TreeNode<double> *expected =
        new leetcode::TreeNode<double>(30.0,
                       new leetcode::TreeNode<double>(36.0,
                                      new leetcode::TreeNode<double>(36.0),
                                      new leetcode::TreeNode<double>(35.0,
                                                     nullptr,
                                                     new leetcode::TreeNode<double>(33.0))),
                       new leetcode::TreeNode<double>(21.0,
                                      new leetcode::TreeNode<double>(26.0),
                                      new leetcode::TreeNode<double>(15.0,
                                                     nullptr,
                                                     new leetcode::TreeNode<double>(8.0))));
    const leetcode::TreeNode<double> *result = leetcode::bstToGst(input);
    CHECK(*expected == *result);
    delete expected;
    delete result;
}
