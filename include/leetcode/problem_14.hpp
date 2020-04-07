#pragma once

#include <algorithm>
#include <string>
#include <vector>
#include <cassert>
#include <numeric>

namespace leetcode
{

template <typename IterTy,
          typename ReturnType =
              typename std::iterator_traits<IterTy>::value_type>
static constexpr ReturnType
longestCommonPrefix_Iterator(
    IterTy iter_begin,
    IterTy iter_end)
{
    return std::accumulate(
        iter_begin + 1,
        iter_end,
        (*iter_begin),
        [](const ReturnType &acc, const ReturnType &rhs) -> ReturnType {
            return ReturnType(
                acc.cbegin(),
                std::mismatch(
                    acc.cbegin(), acc.cend(),
                    rhs.cbegin(), rhs.cend())
                    .first);
        });
}

//  TODO    ::  This can be generalized further...
static std::string longestCommonPrefix(const std::vector<std::string> &strs)
{
    return longestCommonPrefix_Iterator(strs.cbegin(), strs.cend());
}

} // namespace leetcode
