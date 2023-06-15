#include <iostream>

// avoid variable shadowing!!!

// global not const variable (can be change)
int g_a;
int g_b {};
int g_c {34};

// global const (must be init)
const int g_d {4};
constexpr int g_e {5};

// global var (can be visible in global, local and function scope)
int z {6};


void print_global() {
  std::cout << "global var " << z << std::endl;
}


int main() {
  int x {3};

  std::cout << x << std::endl;

  {
    // shadowing
    int x {5};

    // local block (not exist outside)
    int y {1};

    std::cout << x << std::endl;

    std::cout << x << " " << y << " " << x + y << std::endl;
  }

  std::cout << x << std::endl;



  // local var shadow global var
  int z{7};
  std::cout << "local shadow var " << z << std::endl;

  print_global();

  return 0;
}
