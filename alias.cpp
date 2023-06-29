#include <iostream>
#include <string>
#include <vector>
#include <utility> // std::pair

// aliases for:
// 1. platform independ datatypes
// 2. alias complex data structure
// 3. function parameters and return meaning names


// declare alias
// in need alias in function, declare in global scope
using Distance = double;

// declare alias for complex Data Structures
// array of map of string and int
using ArrayMap = std::vector<std::pair<std::string, int>>;


void alias_function(Distance x) {
  std::cout << x << std::endl;
}


int main() {
  Distance meters = 12.5;
  alias_function(meters);


  ArrayMap array_map = {
    std::make_pair("one", 1),
    std::make_pair("two", 2),
    std::make_pair("three", 3),
    std::make_pair("four", 4),
    std::make_pair("five", 5),
  };

  for(int i = 0; i < array_map.size(); i++) {
    std::cout << array_map[i].first << " " << array_map[i].second << std::endl;
  }

  return 0;
}
