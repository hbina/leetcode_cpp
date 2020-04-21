#pragma once

#include <algorithm>
#include <cctype>
#include <string>

namespace leetcode {

static auto
reformat(const std::string& s) -> std::string
{
  using CharTy = typename std::string::value_type;

  std::string result;
  result.reserve(s.size());

  auto characters = std::cbegin(s);
  auto digits = std::cbegin(s);
  do {
    characters =
      std::find_if(characters, std::cend(s), [](const CharTy& x) -> bool {
        return std::isupper(x) || std::islower(x);
      });
    digits = std::find_if(digits, std::cend(s), [](const CharTy& x) -> bool {
      return std::isdigit(x);
    });
    if (characters != std::cend(s) && digits != std::cend(s)) {
      result.push_back(*digits);
      result.push_back(*characters);
    }
  } while (characters != std::cend(s) && digits != std::cend(s));

  if (result.empty()) {
    return result;
  } else {
    if (characters != std::cend(s)) {
      result.push_back(*characters);
    }
    return result;
  }
}
}
