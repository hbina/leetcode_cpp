#pragma once

#include <type_traits>

namespace leetcode {

template<typename ValueTy,
         typename = std::enable_if_t<std::is_integral_v<ValueTy>>>
static auto
numberOfSteps(ValueTy num) -> int
{
  int result = 0;

  while (num != 0) {
    if (num % 2 == 1) {
      result++;
      num--;
    } else {
      result++;
      num >>= 1;
    }
  }

  return result;
}

}
