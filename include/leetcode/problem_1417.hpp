#pragma once

#include <algorithm>
#include <cctype>
#include <string>

namespace leetcode {

template<typename IterTy>
static auto
reformat(IterTy begin, IterTy end) -> std::string
{
  // Prelude
  using CharTy = typename std::string::value_type;
  auto next_characters = [&](const std::string::const_iterator characters) {
    return std::find_if(characters, end, [](const CharTy& x) -> bool {
      return std::isupper(x) || std::islower(x);
    });
  };
  auto next_digits = [&](const std::string::const_iterator digits) {
    return std::find_if(
      digits, end, [](const CharTy& x) -> bool { return std::isdigit(x); });
  };

  // Count the frequencies
  auto length = std::distance(begin, end);
  auto digit_count = std::count_if(
    begin, end, [](const CharTy& x) -> bool { return std::isdigit(x); });
  auto character_count = length - digit_count;

  // Check if the difference is larger than 1, thus impossible.
  if ((digit_count > character_count && digit_count - character_count > 1) ||
      (character_count > digit_count && character_count - digit_count > 1)) {
    return "";
  } else {
    std::string result;
    result.reserve(length);

    auto characters = next_characters(begin);
    auto digits = next_digits(begin);

    if (digit_count < character_count) {
      // Put character at the front
      result.push_back(*characters);
      characters = next_characters(std::next(characters));
      while (digits != end) {
        result.push_back(*digits);
        result.push_back(*characters);
        characters = next_characters(std::next(characters));
        digits = next_digits(std::next(digits));
      }
    } else if (digit_count > character_count) {
      // Put digit at the end
      while (characters != end) {
        result.push_back(*digits);
        result.push_back(*characters);
        characters = next_characters(std::next(characters));
        digits = next_digits(std::next(digits));
      }
      result.push_back(*digits);
    } else {
      // March normally
      while (digits != end && characters != end) {
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
