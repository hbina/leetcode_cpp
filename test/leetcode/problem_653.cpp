#include <doctest/doctest.h>

#include "leetcode/problem_653.hpp"

TEST_CASE("problem_653 1")
{
  const akarithm::TreeNode<>* input_1 = new akarithm::TreeNode<>(
    5,
    new akarithm::TreeNode<>(
      3, new akarithm::TreeNode<>(2), new akarithm::TreeNode<>(4)),
    new akarithm::TreeNode<>(6, nullptr, new akarithm::TreeNode<>(7)));
  const int input_2 = 9;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 2")
{
  const akarithm::TreeNode<>* input_1 = new akarithm::TreeNode<>(
    2, new akarithm::TreeNode<>(1), new akarithm::TreeNode<>(3));
  const int input_2 = 3;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 3")
{
  const akarithm::TreeNode<>* input_1 =
    new akarithm::TreeNode<>(2, nullptr, new akarithm::TreeNode<>(1));
  const int input_2 = 3;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 4")
{
  const akarithm::TreeNode<>* input_1 =
    new akarithm::TreeNode<>(2, new akarithm::TreeNode<>(1), nullptr);
  const int input_2 = 3;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 5")
{
  const akarithm::TreeNode<>* input_1 = nullptr;
  const int input_2 = 3;
  const bool expected = false;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 6")
{
  const akarithm::TreeNode<>* input_1 = new akarithm::TreeNode<>(2);
  const int input_2 = 3;
  const bool expected = false;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 7")
{
  const akarithm::TreeNode<>* input_1 = new akarithm::TreeNode<>(
    0,
    new akarithm::TreeNode<>(-1, new akarithm::TreeNode<>(-3), nullptr),
    new akarithm::TreeNode<>(2, nullptr, new akarithm::TreeNode<>(4)));
  const int input_2 = -4;
  const bool expected = true;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}

TEST_CASE("problem_653 8")
{
  const akarithm::TreeNode<>* input_1 = new akarithm::TreeNode<>(1);
  const int input_2 = 2;
  const bool expected = false;
  const bool result = leetcode::findTarget(input_1, input_2);
  CHECK(expected == result);
  delete input_1;
}
