#pragma once

#include <algorithm>
#include <cctype>
#include <string>

namespace leetcode {

static auto
reformat(const std::string& s) -> std::string
{
  // Prelude
  using CharTy = typename std::string::value_type;
  auto next_characters = [&](const std::string::const_iterator characters) {
    return std::find_if(characters, std::cend(s), [](const CharTy& x) -> bool {
      return std::isupper(x) || std::islower(x);
    });
  };
  auto next_digits = [&](const std::string::const_iterator digits) {
    return std::find_if(digits, std::cend(s), [](const CharTy& x) -> bool {
      return std::isdigit(x);
    });
  };

  // Count the frequencies
  auto digit_count =
    std::count_if(std::cbegin(s), std::cend(s), [](const CharTy& x) -> bool {
      return std::isdigit(x);
    });
  auto character_count = s.size() - digit_count;

  // Check if the difference is larger than 1, thus impossible.
  if ((digit_count > character_count && digit_count - character_count > 1) ||
      (character_count > digit_count && character_count - digit_count > 1)) {
    return "";
  } else {
    std::string result;
    result.reserve(s.size());

    auto characters = next_characters(std::cbegin(s));
    auto digits = next_digits(std::cbegin(s));

    if (digit_count < character_count) {
      // Put character at the front
      result.push_back(*characters);
      characters = next_characters(std::next(characters));
      while (digits != std::cend(s)) {
        result.push_back(*digits);
        result.push_back(*characters);
        characters = next_characters(std::next(characters));
        digits = next_digits(std::next(digits));
      }
    } else if (digit_count > character_count) {
      // Put digit at the end
      while (characters != std::cend(s)) {
        result.push_back(*digits);
        result.push_back(*characters);
        characters = next_characters(std::next(characters));
        digits = next_digits(std::next(digits));
      }
      result.push_back(*digits);
    } else {
      // March normally
      while (digits != std::cend(s) && characters != std::cend(s)) {
        result.push_back(*digits);
        result.push_back(*characters);
        characters = next_characters(std::next(characters));
        digits = next_digits(std::next(digits));
      }
    }
    return result;
  }
}
}
