#pragma once

#include "util/generic/is_palindrome.hpp"

#include <algorithm>
#include <string>

namespace leetcode {

template <typename StringTy = std::string>
static constexpr auto removePalindromeSub(const StringTy &s) -> int {
  if (s.empty())
    return 0;
  else if (akarithm::is_palindrome(std::cbegin(s), std::cend(s)))
    return 1;
  else
    return 2;
}

} // namespace leetcode
