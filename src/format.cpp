#include <string>

#include "format.h"

using std::string;

#define DAY 86400
#define HOUR 3600
#define MIN 60

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds [[maybe_unused]]) {
  int d = seconds / DAY;
  int rest = seconds % DAY;
  int h = rest / HOUR;
  rest = rest % HOUR;
  int m = rest / MIN;
  int s = rest % MIN;
  return std::to_string(d) + " days " + std::to_string(h) + ":" +
         std::to_string(m) + ":" + std::to_string(s);
}