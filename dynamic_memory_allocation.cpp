#include <iostream>

// memory allocated, but never free
void make_memory_leak() {
  // local variable dangling somewhere
  int* ptr{ new int{} };
}


int main() {
  // allocate 4 byte in heap and save address to pointer
  // but allocate primitive objects is meaningless
  int* ptr{ new int };
  *ptr = 7;
  std::cout << ptr << " " << *ptr << std::endl;

  // point to same memory
  int* ptr_link {ptr};
  std::cout << ptr << " " << ptr_link << std::endl;

  // free memory, return pointer to OS
  // if try to access to pointer will be segmentation fault
  // other binded pointers will be dangling
  delete ptr;
  ptr = nullptr;
  std::cout << ptr << " " << ptr_link << std::endl;


  // try to allocate memory
  // if OS can not give memory, return null pointer
  int* value { new (std::nothrow) int{} };
  if (!value) {
    std::cerr << "Could not allocate memory" << std::endl;;
  }


  // if no allocated memory to pointer, allocate
  if (!ptr) {
    ptr = new int;
  }

  // but not necessary make conditions to delete
  // delete deleted pointer is ok
  delete ptr;


  make_memory_leak();

  // also memory leak
  int a = 5;
  int* ptr_a { new int{} }; // allocate memory in heap
  ptr_a = &a; // rewrite to new address


  // solve memory leak
  int b = 5;
  int* ptr_b { new int{} }; // allocate memory in heap
  delete ptr; // free old memory, for next using
  ptr_b = &b; // rewrite to new address

  // one more memory leak (double allocation, old address lost)
  int* ptr_c{ new int{} };
  ptr_c = new int{};

  return 0;
}
