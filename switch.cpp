#include <iostream>

// if no default case label, switch continue next statement

void print_switch_return(int x) {
  switch (x) {
    case 1:
      std::cout << "One" << std::endl;
      return;
    case 2:
      std::cout << "Two" << std::endl;
      return;
    case 3:
      std::cout << "Three" << std::endl;
      return;
    default:
      std::cout << "Unknown" << std::endl;
      return;
  }

  std::cout << "Never print after Return" << std::endl;
}


void print_switch_break(int x) {
  switch (x) {
    case 1:
      std::cout << "One" << std::endl;
      break;
    case 2:
      std::cout << "Two" << std::endl;
      break;
    case 3:
      std::cout << "Three" << std::endl;
      break;
    default:
      std::cout << "Unknown" << std::endl;
      break;
  }

  std::cout << "Print after Break" << std::endl;
}


void print_switch_fallthrough(int x) {
  switch (x) {
    case 1:
    case 2:
    case 3:
      std::cout << "1-3" << std::endl;
      break;
    case 4:
    case 5:
    case 6:
      std::cout << "4-6" << std::endl;
      break;
    case 7:
    case 8:
    case 9:
      std::cout << "7-9" << std::endl;
      break;
    default:
      std::cout << "Unknown" << std::endl;
  }
}


int main() {
  print_switch_return(3);
  std::cout << "-----" << std::endl;
  print_switch_break(3);
  std::cout << "-----" << std::endl;
  print_switch_fallthrough(5);
  std::cout << "-----" << std::endl;
}
