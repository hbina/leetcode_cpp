#pragma once

#include <algorithm>
#include <cctype>
#include <string>

namespace leetcode {

static auto
reformat(const std::string& s) -> std::string
{
  auto characters =
    std::find_if(std::cbegin(s),
                 std::cend(s),
                 [](const typename std::string::value_type& x) -> bool {
                   return std::isupper(x) || std::islower(x);
                 });
  return "";
}
}
