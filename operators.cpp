#include <iostream>

bool is_odd(int num) {
  return (num % 2) == 1;
}

bool is_even(int num) {
  return (num % 2) == 0;
}


int main(int argc, char const *argv[]) {
  // unary
  int a {3};
  int b {6};
  std::cout << +a << std::endl;
  std::cout << -b << std::endl;

  // binary
  int x {6};
  int y {4};
  std::cout << x + y << std::endl;
  std::cout << x - y << std::endl;
  std::cout << x * y << std::endl;
  std::cout << x / y << std::endl; // integer division, produce integer
  std::cout << x % y << std::endl;

  // cast will solve this problem
  std::cout << static_cast<double>(x) / y << std::endl;
  std::cout << x / static_cast<double>(y) << std::endl;
  std::cout << static_cast<double>(x) / static_cast<double>(y) << std::endl;

  int q {2};
  q += 1;
  q -= 1;
  q *= 2;
  q /= 2;
  q %= 2;
  std::cout << q << std::endl;

  std::cout << is_odd(2) << " " << is_even(2) << std::endl;


  // prefix - change, then return value
  // postfix - return value, then change
  // prefix more performance and more predictable than postfix
  int pre_inc {2};
  int post_inc {2};
  int pre_dec {2};
  int post_dec {2};
  std::cout << ++pre_inc << std::endl;
  std::cout << --pre_dec << std::endl;
  std::cout << post_inc++ << std::endl;
  std::cout << post_dec-- << std::endl;


  // always use parenthes to exact meaning
  std::cout << ((1 > 3) ? "yes" : "no") << std::endl;


  bool t {true};
  bool f {false};
  // conditional equality is redundant, == true/false can be removed
  // if(!t) {...}
  if(t == false) {
    std::cout << "t eq false" << std::endl;
  }
  // if(f) {...}
  if(f == true) {
    std::cout << "f eq false" << std::endl;
  }

  return 0;
}
