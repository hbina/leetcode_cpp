#pragma once

#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <vector>

namespace april2020 {

class LRUCache
{
  using ListTy = std::list<int>;
  using PairTy = std::pair<int, ListTy::iterator>;
  using MapTy = typename std::unordered_map<int, PairTy>;
  using MapTyIter = MapTy::iterator;

  void touch(MapTyIter it)
  {
    int key = it->first;
    used.erase(it->second.second);
    used.push_front(key);
    it->second.second = used.begin();
  }

  MapTy cache;
  ListTy used;
  std::size_t capacity;

public:
  LRUCache(const std::size_t capacity)
    : capacity(capacity)
  {
    cache.reserve(capacity);
  }

  int get(const int& key)
  {
    auto it = cache.find(key);
    if (it == cache.end())
      return -1;
    touch(it);
    return it->second.first;
  }

  void put(const int& key, const int& value)
  {
    auto it = cache.find(key);
    if (it != cache.end())
      touch(it);
    else {
      if (cache.size() == capacity) {
        cache.erase(used.back());
        used.pop_back();
      }
      used.push_front(key);
    }
    cache[key] = { value, used.begin() };
  }
};

}
