#include <iostream>

// force define as inline, IN MODERN C++ NOT RECOMENDED AND NOT USE
inline int min(int x, int y) {
  return (x < y) ? x : y;
}


// run-time function
int compare(int x, int y) {
  return (x > y ? x : y);
}


// compile-time function
constexpr int compare_compile(int x, int y) {
  return (x > y ? x : y);
}

// for constexpr functions MUST use full definition not forward declaration


// must evaluate at compile-time, or compile error
consteval int greater_consteval(int x, int y) {
    return (x > y ? x : y);
}


int main() {
  // inline expression, compile-time
  std::cout << ((5 < 6) ? 5 : 6) << std::endl;


  // compile-time (symbolic) constants
  constexpr int x{7};
  constexpr int y{9};
  std::cout << (x > y ? x : y) << std::endl;


  // compile-time transforms to run-time
  std::cout << compare(x, y) << std::endl;

  // stay compile-time
  std::cout << compare_compile(x, y) << std::endl;


  // compile-time transforms to run-time
  int a{5};
  int b{6};
  std::cout << compare_compile(a, b) << std::endl;

  return 0;
}
