#pragma once

#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

namespace leetcode
{

template <typename ValueTy>
void merge_simple(
    std::vector<ValueTy> &lhs, std::size_t m,
    const std::vector<ValueTy> &rhs, std::size_t n)
{
    lhs.resize(n);
    lhs.insert(lhs.begin() + m, rhs.cbegin(), rhs.cend());
    std::sort(lhs.begin(), lhs.end());
}

} // namespace leetcode
