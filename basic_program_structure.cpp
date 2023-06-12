#include <iostream>

int main() {
  // type identifier { expression };

  // random memory value
  int x;

  // copy decloration
  char q = 'q';

  // list declaration
  // default zeroes value
  int a {}; // better for cin

  int b {0}; // better for cout

  std::cin >> a;

  std::cout << "String Literal" << std::endl;
  std::cout << x << std::endl;
  std::cout << q << std::endl;
  std::cout << a << " " << b << std::endl;

  // \n faster than std::endl


  int y {};
  int z {};

  std::cin >> y >> z;

  std::cout << y << " " << z << std::endl;

  return 0;
}
