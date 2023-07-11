#include <iostream>
#include <string>

// in not need modify, use const reference
// if string, prefer std::string_view
void print_reference(const std::string& s) {
  std::cout << s << std::endl;
}


// in need modify, use simple reference
void inc_reference(int& i) {
  ++i;
}


int main() {
  // non const reference can't bind with const and rvalue literal
  int x {5};
  int& ref {x};

  std::cout << x << " " << ref << std::endl;

  // has same address
  std::cout << &x << " " << &ref << std::endl;

  ++ref;
  std::cout << x << " " << ref << std::endl;

  ++x;
  std::cout << x << " " << ref << std::endl;


  // also can't rereference to other object
  // y assigment value to x and ref
  int y {9};
  ref = y;

  ++x;

  std::cout << x << " " << ref << " " << y << std::endl;
  std::cout << &x << " " << &ref << " " << &y << std::endl;


  // const ref (both must be const)
  const int c {15};
  const int& cref {c};
  std::cout << c << " " << cref << std::endl;


  // pass string by value is so expensive (copy each byte)
  // pass by reference is inexpensive
  std::string str {"Text string 123"};
  print_reference(str);


  // reference can modify value in functions
  int a {7};
  std::cout << a << std::endl;
  inc_reference(a);
  std::cout << a << std::endl;

  return 0;
}
