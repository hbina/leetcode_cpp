#pragma once

#include <algorithm>
#include <iostream>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <vector>

namespace april2020 {

template<typename ValueTy>
static constexpr auto
rangeBitwiseAnd(ValueTy m, ValueTy n) -> ValueTy
{
  auto step = 0;
  while (m != n) {
    m >>= 1;
    n >>= 1;
    step++;
  }
  return m << step;
}

}
