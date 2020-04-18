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
        if (counter < 0) {
          if (storage + counter > 0) {
            storage += counter;
            counter = 1;
          } else {
            return false;
          }
        } else {
          counter++;
        }
        break;
      }
      case ')': {
        counter--;
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
