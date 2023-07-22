#include <iostream>
#include <iterator>

struct Rectangle {
  int length {};
  int width {};
};

namespace Week {
  enum days {
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday,

    max_days
  };
}


// array pass to function by reference itself
void pass_array(int array[]) {
  array[0] = 6;
  array[1] = 7;
  array[2] = 8;
  array[3] = 9;
  array[4] = 0;
}

// Result will be 2, because pass array pointer
// 8 byte passed pointer and 4 byte element integer
void print_size(int a[]) {
  std::cout << "Passed Array size = " << sizeof(a) / sizeof(a[0]) << std::endl;
}


int main() {
  // auto detect size
  int a[] {1, 2, 3, 4, 5};

  // declare size
  int b[5] {};

  // symbolic constant
  constexpr int week_days {7};
  int week[week_days] {};

  // array size as enum value
  int week_enum[Week::max_days] {};
  week_enum[Week::friday] = 23;
  std::cout << week_enum[Week::friday] << std::endl;

  // array of structs
  Rectangle r[3] {};
  // all members * array size
  std::cout << sizeof(r) << std::endl;
  std::cout << r[0].length << " " << r[0].width << std::endl;


  std::cout << "Before" << std::endl;
  for (int i = 0; i < std::size(a); ++i) {
    std::cout << a[i] << std::endl;
  }

  pass_array(a);
  std::cout << "After" << std::endl;
  for (int i = 0; i < std::size(a); ++i) {
    std::cout << a[i] << std::endl;
  }


  std::cout << "Array size = " << sizeof(a) / sizeof(a[0]) << std::endl;
  print_size(a);

  return 0;
}
