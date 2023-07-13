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


const std::string& get_string_by_reference() {
  // static - exist until programm end
  // if omit static will be undefined behaviour (dangling reference)
  static const std::string string_reference {"String Value from return"};
  return string_reference;
}


const int& share_reference() {
  // global variable, all reference has same value
  static int share_reference_value {0};
  ++share_reference_value;
  return share_reference_value;
}


// local variable (compilator make warning)
// const std::string& return_dangling_reference() {
//   const std::string dangling_reference_string {"Local Value"};
//   return dangling_reference_string;
// }


// pass reference and return reference, all work fine
const std::string& compare_string_alph(const std::string& a, const std::string& b) {
  return (a < b) ? a : b;
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


  std::cout << get_string_by_reference() << std::endl;


  // at start 0, then inc by 2 (each reference point at same object)
  const int& id1 {share_reference()};
  const int& id2 {share_reference()};
  std::cout << id1 << " " << id2 << std::endl;


  // not reference contain returned copy of value
  const int id3 {share_reference()};
  const int id4 {share_reference()};
  std::cout << id3 << " " << id4 << std::endl;


  // std::string dangling_ref {return_dangling_reference()};
  // std::cout << dangling_ref << std::endl;


  std::string str1 {"reference"};
  std::string str2 {"pointer"};
  std::cout << compare_string_alph(str1, str2) << std::endl;

  return 0;
}
