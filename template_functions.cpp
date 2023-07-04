#include <iostream>

// template produces overloading functions
// templates in not functions (they not compiles and run directly)

// template types
// 1. type template - typed parameters
// 2. non type template - constexpr parameters
// 3. template template - template parameters


// template parameter declaration
template <typename T>

// function template
T max(T x, T y) {
  return (x < y) ? y : x;
}


// template with two type
template <typename T, typename U>
T min(T x, U y) {
  return (x > y) ? y : x;
}


// abbreviated function template, auto works like template
// auto max(auto x, auto y) {
//     return (x < y) ? y : x;
// }


int main() {
  std::cout << max<int>(1, 2) << std::endl;
  std::cout << max<double>(1.5, 6.2) << std::endl;
  std::cout << max<char>('t', 'f') << std::endl; // by ascii number

  // is is ok, template argument deduction
  std::cout << max<>(1, 2) << std::endl;
  std::cout << max(1, 2) << std::endl; // better use this variant

  std::cout << min(1, 2) << std::endl;

  return 0;
}
