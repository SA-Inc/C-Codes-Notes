#include <iostream>
#include <string>


void print_by_value(std::string val) {
  std::cout << val << std::endl;
}


void print_by_reference(const std::string& ref) {
  std::cout << ref << std::endl;
}


void print_by_address(const std::string* ptr) {
  std::cout << *ptr << std::endl;
}


void inc_int(int* num) {
  ++(*num);
}


void loop_array_pointer(int* arr, int n) {
  for(int i = 0; i < n; ++i) {
    std::cout << arr[i] << " " << &arr[i] << std::endl;
  }
}


void optional_arg(std::string* name = nullptr) {
  std::cout << "Hello ";

  if(name) {
    std::cout << *name;
  } else {
    std::cout << "guest";
  }

  std::cout << std::endl;
}


int main() {
  std::string str {"Text String 123"};

  // copy of string, expensive
  print_by_value(str);
  // cheap
  print_by_reference(str);
  // cheap
  print_by_address(&str);


  int a {2};
  std::cout << a << std::endl;
  inc_int(&a);
  std::cout << a << std::endl;


  int array[] {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(array[0]);
  loop_array_pointer(array, n);


  // function with optional pointer argument
  optional_arg();
  std::string username {"sa_inc"};
  optional_arg(&username);

  return 0;
}
