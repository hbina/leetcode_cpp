#pragma once

#include <algorithm>
#include <iterator>
#include <string>

#include "util/generic/zip_fold.hpp"

namespace leetcode {

template<typename IterStr>
static auto
multiply(IterStr lhs_begin, IterStr lhs_end, IterStr rhs_begin, IterStr rhs_end)
  -> std::string
{
  // TODO: Transform this into a reverse iterator.
  using CharTy = typename std::iterator_traits<IterStr>::value_type;
  using ValueTy = typename std::iterator_traits<IterStr>::value_type;

  // (lhs,rhs)->(result, carry)
  auto char_add = [](const CharTy lhs,
                     const CharTy rhs) -> std::pair<CharTy, CharTy> {
    return std::make_pair(((lhs - '0') + (rhs - '0') % 10) + '0',
                          ((lhs - '0') + (rhs - '0')) / 10);
  };

  // (lhs,rhs)->(result, carry)
  auto char_multiply = [](const CharTy lhs,
                          const CharTy rhs) -> std::pair<CharTy, CharTy> {
    return std::make_pair(((lhs - '0') * (rhs - '0') % 10) + '0',
                          ((lhs - '0') * (rhs - '0')) / 10);
  };
  return result;
}
}
