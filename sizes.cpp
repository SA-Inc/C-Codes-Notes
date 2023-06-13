#include <iostream>

int main() {
  int a {3};
  bool b {false};
  char c {'d'};

  int l[5] = {1, 2, 3, 4, 5};

  std::cout << sizeof(a) << " " << &a << std::endl;
  std::cout << sizeof(b) << " " << &b << std::endl;
  std::cout << sizeof(c) << " " << static_cast<void *>(&c) << std::endl;
  std::cout << sizeof(l) << " " << &l << std::endl;


  unsigned short s {65535};
  s++;
  std::cout << s << " " << &s << std::endl;

  int blanc;
  std::cin >> blanc;

  return 0;
}
