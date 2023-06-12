// g++ main_file.cpp ext_file.cpp -o main_file

// main program file
#include <iostream>

int sum_func(int x, int y);

int main(int argc, char const *argv[]) {
  std::cout << sum_func(3, 9) << std::endl;

  return 0;
}


// ------------ 
// external program file
int sum_func(int x, int y) {
  return x + y;
}
