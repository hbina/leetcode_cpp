#pragma once

#include <algorithm>
#include <iterator>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <vector>

namespace april2020 {

template<typename IterTy>
static auto
search(IterTy begin, IterTy end, const int& target) -> int
{
  auto find = std::find(begin, end, target);
  return find == end ? -1 : std::distance(begin, find);
}

}
