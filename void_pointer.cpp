#include <iostream>

int main() {
  // general data types
  int i {5};
  double d {3.6};

  struct some_struct {
    int a {1};
    double b {6.7};
  };

  some_struct s;


  // void pointer (point to any data type)
  void* ptr;

  // it has own address, bot not value (can not dereferencing)
  std::cout << ptr << " " << &ptr << std::endl;
  // everything ok
  ptr = &d;
  std::cout << ptr << " " << &d << std::endl;
  ptr = &s;
  std::cout << ptr << " " << &s << std::endl;
  ptr = &i;
  std::cout << ptr << " " << &i << std::endl;

  // however we can create normal typed pointer and get access to value
  int* int_ptr {static_cast<int*>(ptr)};
  std::cout << int_ptr << " " << &int_ptr << " " << *int_ptr << std::endl;

  // has own address, but point to nowhere
  // should  be avoid this
  void* ptr_null {nullptr};
  std::cout << ptr_null << " " << &ptr_null << std::endl;

  return 0;
}
