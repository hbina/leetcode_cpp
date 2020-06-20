#pragma once

#include <vector>

namespace leetcode {

template<typename IterTy>
std::vector<int>
smallerNumbersThanCurrent(IterTy iter_begin, IterTy iter_end)
{
  std::vector<int> result;
  result.reserve(std::distance(iter_begin, iter_end));

  for (IterTy iter = iter_begin; iter != iter_end; iter++) {
    int counter = 0;
    for (IterTy iter2 = iter_begin; iter2 != iter_end; iter2++) {
      if (iter2 != iter) {
        if (*iter > *iter2) {
          counter++;
        }
      }
    }
    result.emplace_back(counter);
  }

  return result;
}

}
