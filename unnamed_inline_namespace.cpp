#include <iostream>

// call only from this file
namespace {
  void unnamed_space () {
    std::cout << "call_from_unnamed_space" << std::endl;
  }
}


// similar to unnamed namespace
static void static_function () {
  std::cout << "call_static_function" << std::endl;
}


// different version of function realisation
namespace version_1 {
  void print_nums () {
    std::cout << "1 2 3 4 5" << std::endl;
  }
}

inline namespace version_2 {
  void print_nums () {
    std::cout << "6 7 8 9 0" << std::endl;
  }
}


int main() {
  unnamed_space();

  static_function();

  version_1::print_nums();
  version_2::print_nums();

  // inline namespace resolves to global
  print_nums();

  return 0;
}
