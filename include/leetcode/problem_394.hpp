#pragma once

#include <stack>
#include <string>

//  TODO    ::  Possible to use std::string_view here instead?

namespace leetcode {

template<typename IterTy, typename StringTy = std::string>
static auto
decodeString(IterTy iter_begin, IterTy iter_end) -> StringTy
{
  return {};
}

} // namespace leetcode
