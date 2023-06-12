#include <iostream>

// definition
// void foo() {...}
// int x;

// declaration
// void foo();
// int x;

// pure declaration
// void foo();

// initializer
// int x {2};


int add(int x, int y);


int main() {
  std::cout << add(3, 4) << std::endl;

  return 0;
}


int add(int x, int y) {
  return x + y;
}
