#include <iostream>

// functions stricture
// return_type function_name(data_type parameter) {...}

void print_string_literal() {
  std::cout << "String Literal was printed" << std::endl;
}


int add_numbers(int a, int b) {
  return a + b;
}


int get_input_numbers() {
  std::cout << "Enter an integer: ";
  int input {};
  std::cin >> input;

  return input;
}


void black_box(int a) {
  // local var
  int c = 32;

  c *= a;

  std::cout << c << std::endl;
}


int main() {
  // function arguments can be
  // - literals
  // - variables
  // - returned value from other function

  // parameters - local scope variables

  print_string_literal();

  int n1 {get_input_numbers()};
  int n2 {get_input_numbers()};

  std::cout << add_numbers(n1, n2) << std::endl;

  black_box(5);

  return 0;
}
