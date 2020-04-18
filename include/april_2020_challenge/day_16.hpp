#pragma once

#include "util/string/group_by.hpp"

#include <string>

namespace april2020 {

static auto
checkValidString(const std::string& s) -> bool
{
  int storage = 0;
  int counter = 0;
  for (auto x : s) {
    switch (x) {
      case '(': {
        counter++;
        break;
      }
      case ')': {
        if (counter > 0) {
          counter--;
        } else {
          if (storage > 0) {
            storage--;
          } else {
            return false;
          }
        }
        break;
      }
      case '*': {
        storage++;
        break;
      }
      default: {
        return false;
      }
    }
  }
  return counter == 0;
}
}
