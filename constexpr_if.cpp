#include <iostream>

int main() {
  constexpr double number{5};

  // compile-time (if statement replaces to std output)
  if constexpr (number == 5) {
    std::cout << "Num eq 5" << std::endl;
  }
  else {
    std::cout << "Num not eq 5" << std::endl;
  }

  return 0;
}
