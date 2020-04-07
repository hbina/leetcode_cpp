#include "doctest/doctest.h"

#include "leetcode/problem_203.hpp"

TEST_CASE("problem_203")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(2,
                                      new leetcode::ListNode<>(6,
                                                     new leetcode::ListNode<>(3,
                                                                    new leetcode::ListNode<>(4,
                                                                                   new leetcode::ListNode<>(5,
                                                                                                  new leetcode::ListNode<>(6)))))));
    const int input_2 = 6;
    const leetcode::ListNode<> *expected = new leetcode::ListNode<>(1,
                                                new leetcode::ListNode<>(2,
                                                               new leetcode::ListNode<>(3,
                                                                              new leetcode::ListNode<>(4,
                                                                                             new leetcode::ListNode<>(5)))));
    leetcode::ListNode<> *result = leetcode::removeElements(input, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}

TEST_CASE("problem_203")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(2,
                                      new leetcode::ListNode<>(6,
                                                     new leetcode::ListNode<>(3,
                                                                    new leetcode::ListNode<>(4,
                                                                                   new leetcode::ListNode<>(5,
                                                                                                  new leetcode::ListNode<>(6)))))));
    const int input_2 = 32;
    const leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(2,
                                      new leetcode::ListNode<>(6,
                                                     new leetcode::ListNode<>(3,
                                                                    new leetcode::ListNode<>(4,
                                                                                   new leetcode::ListNode<>(5,
                                                                                                  new leetcode::ListNode<>(6)))))));
    leetcode::ListNode<> *result = leetcode::removeElements(input, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}

TEST_CASE("problem_203")
{
    leetcode::ListNode<> *input = new leetcode::ListNode<>(1);
    const int input_2 = 1;
    const leetcode::ListNode<> *expected = nullptr;
    leetcode::ListNode<> *result = leetcode::removeElements(input, input_2);
    CHECK(expected == result);
    delete result;
    delete expected;
}

TEST_CASE("problem_203")
{
    leetcode::ListNode<> *input = nullptr;
    const int input_2 = 1;
    const leetcode::ListNode<> *expected = nullptr;
    leetcode::ListNode<> *result = leetcode::removeElements(input, input_2);
    CHECK(expected == result);
    delete result;
    delete expected;
}

TEST_CASE("problem_203")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(1,
                                      new leetcode::ListNode<>(1)));
    const int input_2 = 1;
    const leetcode::ListNode<> *expected = nullptr;
    leetcode::ListNode<> *result = leetcode::removeElements(input, input_2);
    CHECK(expected == result);
    delete result;
    delete expected;
}

TEST_CASE("problem_203")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(3,
                       new leetcode::ListNode<>(2,
                                      new leetcode::ListNode<>(1)));
    const int input_2 = 1;
    const leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(3,
                       new leetcode::ListNode<>(2));
    leetcode::ListNode<> *result = leetcode::removeElements(input, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}

TEST_CASE("problem_203")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(2,
                                      new leetcode::ListNode<>(6,
                                                     new leetcode::ListNode<>(3,
                                                                    new leetcode::ListNode<>(4,
                                                                                   new leetcode::ListNode<>(5,
                                                                                                  new leetcode::ListNode<>(6)))))));
    const int input_2 = 6;
    const leetcode::ListNode<> *expected = new leetcode::ListNode<>(1,
                                                new leetcode::ListNode<>(2,
                                                               new leetcode::ListNode<>(3,
                                                                              new leetcode::ListNode<>(4,
                                                                                             new leetcode::ListNode<>(5)))));
    leetcode::ListNode<> *result = leetcode::removeElements(input, input_2);
    CHECK(*expected == *result);
    delete result;
    delete expected;
}

TEST_CASE("problem_203 -- If")
{
    leetcode::ListNode<> *input =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(2,
                                      new leetcode::ListNode<>(6,
                                                     new leetcode::ListNode<>(3,
                                                                    new leetcode::ListNode<>(4,
                                                                                   new leetcode::ListNode<>(5,
                                                                                                  new leetcode::ListNode<>(6)))))));
    const leetcode::ListNode<> *expected =
        new leetcode::ListNode<>(1,
                       new leetcode::ListNode<>(3,
                                      new leetcode::ListNode<>(5)));
    leetcode::ListNode<> *result = leetcode::removeElements_If(
        input,
        [](const int &val) -> bool {
            return val % 2 == 0;
        });
    CHECK(*expected == *result);
    delete result;
    delete expected;
}
