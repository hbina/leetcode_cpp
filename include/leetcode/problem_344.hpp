#pragma once

#include <algorithm>
#include <vector>

namespace leetcode {

void
reverseString(std::vector<char>& s)
{
  std::reverse(s.begin(), s.end());
}

} // namespace leetcode
