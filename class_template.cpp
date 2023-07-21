#include <iostream>

// we can not create struct overloading directly, only via template
template <typename T>
struct Pair{
  T first {};
  T second {};
};

// function overloading for struct
constexpr int max(Pair<int> p) {
  return (p.first < p.second ? p.second : p.first);
}

constexpr double max(Pair<double> p) {
  return (p.first < p.second ? p.second : p.first);
}


// function overloading via template
template <typename T>
constexpr T max_template(Pair<T> p) {
    return (p.first < p.second ? p.second : p.first);
}


template <typename T, typename U>
struct PairUni {
  T first{};
  U second{};
};

template <typename T, typename U>
void print_pair(PairUni<T, U> p) {
  std::cout << '[' << p.first << ", " << p.second << ']' << std::endl;
}


int main() {
  Pair<int> p1 {5, 6};
  std::cout << p1.first << " " << p1.second << std::endl;

  Pair<double> p2 {1.2, 3.4};
  std::cout << p2.first << " " << p2.second << std::endl;

  std::cout << max(p1) << std::endl;
  std::cout << max(p2) << std::endl;

  std::cout << max_template(p1) << std::endl;
  std::cout << max_template(p2) << std::endl;


  // struct with different typed members
  PairUni<int, double> p3{1, 2.3};
  PairUni<double, int> p4{4.5, 6};
  PairUni<int, int> p5{7, 8};

  print_pair(p3);
  print_pair(p4);
  print_pair(p5);

  return 0;
}
