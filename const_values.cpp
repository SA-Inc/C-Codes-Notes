#include <iostream>

// if need constants can be used namespace wrapper
namespace constants {
  // by default internal linkage
  constexpr double gravity {9.8};
}

// compile time const - all expressions and assigments while compiling
// runtime const - expressions and assigments while program running

// if we sure, that value know at compile time - constexpr
// if we not sure, that value know at compile time, init at runtime - const

// work, but not recomended
// parameter pass by value (copy), but can not changed
void print_const(const int p) {
  // p++;
  std::cout << p << std::endl;
}


// work, but meaningless (const ignored)
// because not use const for return
const int return_const() {
  return 76;
}


int num_enter() {
  int num {};
  std::cin >> num;
  return num;
}


int main() {
  // symbolic constants
  // compile time const
  const int a {13};
  print_const(a);
  std::cout << a << std::endl;


  // return 'const' value, but can be changed
  int b {return_const()};
  b++;
  std::cout << b << std::endl;


  // runtime const
  const int y {num_enter()};


  // constexpr - only compile time
  constexpr int e {4 * 6 + 7};
  std::cout << e << std::endl;

  return 0;
}
