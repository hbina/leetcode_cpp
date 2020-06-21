#pragma once

#include <algorithm>
#include <iterator>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <vector>

namespace april2020 {

template<typename ResultTy = int, typename IterTy>
static auto
search(IterTy begin, IterTy end, const int& target) -> ResultTy
{
  const auto find = std::find(begin, end, target);
  return find == end ? -1 : static_cast<ResultTy>(std::distance(begin, find));
}

}
