#pragma once

#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>

namespace april2020 {

// FIXME:: This algorithm is severely restricted.
// 1. It will not work with ForwardIterator
// 2. It allocates 2 additional arrays of the same size as input...
// 3. There is a way to remove these 2 allocations completely...
template<typename IterTy>
static auto
productExceptSelf(IterTy begin, IterTy end) -> std::vector<int>
{
  // Prelude
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;

  auto rbegin = std::make_reverse_iterator(end);
  auto rend = std::make_reverse_iterator(begin);
  auto size = std::distance(begin, end);

  std::vector<ValueTy> forward;
  forward.reserve(size);
  forward.emplace_back(1);
  std::vector<ValueTy> backward;
  backward.reserve(size);
  backward.emplace_back(1);

  std::partial_sum(begin,
                   std::prev(end),
                   std::back_insert_iterator(forward),
                   std::multiplies{});
  std::partial_sum(rbegin,
                   std::prev(rend),
                   std::back_insert_iterator(backward),
                   std::multiplies{});

  std::vector<ValueTy> result;
  result.reserve(size);
  std::transform(
    std::cbegin(forward),
    std::cend(forward),
    std::crbegin(backward),
    std::back_insert_iterator(result),
    [](const ValueTy& lhs, const ValueTy& rhs) { return lhs * rhs; });
  return result;
}

} // namespace april2020
