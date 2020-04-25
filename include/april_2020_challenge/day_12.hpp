#pragma once

#include <algorithm>
#include <iterator>
#include <queue>
#include <vector>

namespace april2020 {

template<typename IterTy>
static constexpr auto
lastStoneWeight(IterTy begin, IterTy end) -> int
{
  using ValueTy = typename std::iterator_traits<IterTy>::value_type;

  std::priority_queue<ValueTy> queue;
  std::for_each(begin, end, [&](const ValueTy& x) {
    if (x != 0)
      queue.push(x);
  });
  while (queue.size() >= 2) {
    auto t1 = queue.top();
    queue.pop();
    auto t2 = queue.top();
    queue.pop();
    auto result = t1 - t2;
    if (result != 0)
      queue.push(result);
  }
  return queue.size() == 1 ? queue.top() : 0;
}

} // namespace april2020
