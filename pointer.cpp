#include <iostream>
#include <string>


int main() {
  int a {3};
  std::cout << a << std::endl; // data
  std::cout << &a << std::endl; // address
  std::cout << *(&a) << std::endl; // dereference address


  int b {7};
  int* ptr {&b};
  std::cout << b << " " << ptr << " " << *ptr << std::endl;
  std::cout << &ptr << std::endl; // pointer has own address


  // pointer reassigment
  int x {1};
  int* ptr_x {&x};
  std::cout << *ptr_x << std::endl;

  int y {2};
  ptr_x = &y;
  std::cout << *ptr_x << std::endl;


  // change value by pointer
  *ptr_x = 5;
  std::cout << y << " " << *ptr_x << std::endl;


  // null pointer
  // use it to avoid dangling pointers
  int* ptr_null_impl {};
  int* ptr_null_expl {nullptr};
  std::cout << ptr_null_impl << " " << ptr_null_expl << std::endl;

  if(ptr_null_expl == nullptr) {
    std::cout << "is null" << std::endl;
  } else {
    std::cout << "is not null" << std::endl;
  }


  // implicit convert to bool
  if(ptr_null_impl) {
    std::cout << "is not null" << std::endl;
  } else {
    std::cout << "is null" << std::endl;
  }

  return 0;
}
