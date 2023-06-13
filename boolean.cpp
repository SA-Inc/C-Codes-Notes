#include <iostream>

int main() {
  bool print_bool_as_string {false};

  bool a {true};
  bool b {false};

  // output as string
  if (print_bool_as_string) {
    std::cout << std::boolalpha;
  }
  std::cout << a << std::endl;
  std::cout << b << std::endl;

  bool c {};
  bool d {};
  // input as string
  if (print_bool_as_string) {
    std::cin >> std::boolalpha;
  }
  std::cin >> c;
  std::cin >> d;
  std::cout << c << std::endl;
  std::cout << d << std::endl;

  return 0;
}
