#include <iostream>

void print_msg() {
    std::cout << "global scope" << std::endl;
}


namespace my_math {
  void print_msg() {
    std::cout << "local namespace scope" << std::endl;
  }


  int add(int x, int y) {
    return x + y;
  }


  void call_print() {
    // local scope in namespace
    print_msg();

    // global scope
    ::print_msg();
  }


  namespace nested {
    void print_nested() {
      std::cout << "from nested namespace" << std::endl;
    }
  }
}


int main() {
  std::cout << my_math::add(1, 5) << std::endl;

  my_math::call_print();

  my_math::nested::print_nested();

  namespace alias_math = my_math;

  alias_math::call_print();

  return 0;
}
