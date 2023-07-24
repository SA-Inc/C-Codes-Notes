#include <iostream>

int main() {
  int* ptr;
  int** ptr_ptr;

  int a {5};
  std::cout << &a << std::endl;

  ptr = &a;
  // own pointer address, where points (a var address), dereferencing value
  std::cout << &ptr << " " << ptr << " " << *ptr << std::endl;

  ptr_ptr = &ptr;
  // own pointer address, where points (ptr address), dereferencing value
  std::cout << &ptr_ptr << " " << ptr_ptr << " " << **ptr_ptr << std::endl;


  // not allowed (operator& requires lvalue, but &value is rvalue)
  int** ptrptr {&&value};

  // but this allowed
  int** ptrptr {nullptr};

  return 0;
}
