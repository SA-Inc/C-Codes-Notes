#include <iostream>

// avoid non const global variables
// use local variables

// external by default
int g_c {2};

// change external to internal variable linkage
static int g_x {};

// const by default internal
const int g_y {1};
constexpr int g_z {2};

// make external global variables
// extern constexpr (but is useless, can not be get external value, if in other file)
extern const int g_a {1};
extern constexpr int g_b {2};


int main() {
  std::cout << g_x << ' ' << g_y << ' ' << g_z << std::endl;

  return 0;
}
