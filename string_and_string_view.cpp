#include <iostream>
#include <string>
#include <string_view>

void print_string(std::string str) {
  std::cout << str << std::endl;
}


void print_string_view(std::string_view  str) {
  std::cout << str << std::endl;
}


int main() {
  std::string a {"string value"};
  std::cout << a << std::endl;

  a = "just a string";
  std::cout << a << std::endl;

  a += " concat";
  std::cout << a << std::endl;


  // pass by value (so expencive)
  print_string(a);


  std::print_string_view sv {"String View"};
  // pass by reference (better)
  print_string_view(sv);


  // read line with spaces until new line char
  // >> - ignore left spaces
  // std::getline - get full line until \n
  // std::ws - ignore whitespaces
  std::string input_string {};
  std::getline(std::cin >> std::ws, input_string);
  // std::cin >> input_string;
  std::cout << "Input String: " << input_string << std::endl;

  // .length() return unsigned int
  int input_string_length {static_cast<int>(input_string.length())};
  std::cout << "String Length: " << input_string_length << std::endl;

  // other new function C++20
  // std::cout << "String Length: " << std::ssize(input_string_length) << std::endl;

  // not work
  // constexpr std::string
  // work
  // constexpr std::string_view

  return 0;
}
