#include "doctest/doctest.h"

#include "leetcode/problem_173.hpp"

TEST_CASE("problem_173")
{
    const leetcode::TreeNode<> *input =
        new leetcode::TreeNode<>(7,
                       new leetcode::TreeNode<>(3),
                       new leetcode::TreeNode<>(15,
                                      new leetcode::TreeNode<>(9),
                                      new leetcode::TreeNode<>(20)));
    leetcode::BSTIterator iterator =
        leetcode::BSTIterator(input);
    CHECK(3 == iterator.next()->val);
    CHECK(7 == iterator.next()->val);
    CHECK(true == iterator.hasNext());
    CHECK(9 == iterator.next()->val);
    CHECK(true == iterator.hasNext());
    CHECK(15 == iterator.next()->val);
    CHECK(true == iterator.hasNext());
    CHECK(20 == iterator.next()->val);
    CHECK(false == iterator.hasNext());
    delete input;
}
