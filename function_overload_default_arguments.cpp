#include <iostream>

// overload based on number and types of parameters, not on return type

int add(int x, int y) {
  std::cout << "int add" << std::endl;
  return x + y;
}


// overload by type of parameters
double add(double x, double y) {
  std::cout << "double add" << std::endl;
  return x + y;
}


// overload by number of parameters
int add(int x, int y, int z) {
  std::cout << "triple int add" << std::endl;
  return x + y + z;
}


// default arguments, only copy assigment, not list assigment
// default arguments must be init from right side, on left side passed arguments
// if use forward declaration, can not reassigment
void default_arguments(int a = 10, int b = 20) {
  std::cout << a << " " << b << std::endl;
}


int main() {
  std::cout << add(1, 1) << std::endl;
  std::cout << add(1.2, 1.6) << std::endl;
  std::cout << add(1, 2, 1) << std::endl;

  default_arguments(1, 2);
  default_arguments(1);
  default_arguments();

  return 0;
}
