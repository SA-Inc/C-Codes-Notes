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


int main() {
  std::cout << add(1, 1) << std::endl;
  std::cout << add(1.2, 1.6) << std::endl;
  std::cout << add(1, 2, 1) << std::endl;

  return 0;
}
