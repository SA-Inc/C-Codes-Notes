#include <iostream>

int main() {
  // variable and pointer must be both const
  const int x {1};
  const int* ptr {&x};

  // assignment not allowed
  // *ptr = 6;
  std::cout << x << " " << *ptr << " " << ptr << std::endl;

  // repoint
  const int y {6};
  ptr = &y;


  // const pointer assignment not allowed, but variable works
  int a {5};
  const int* ptr_a {&a};
  // *ptr_a = 6;
  a = 7;
  std::cout << a << " " << *ptr_a << " " << ptr_a << std::endl;


  // const pointer, can not repoint to other variable, but can change value
  int* const ptr_c {&a};
  // ptr_c = &x;


  // nothing can be changed
  const int* const ptr_cc {&a};

  return 0;
}
