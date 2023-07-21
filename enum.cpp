#include <iostream>
#include <string_view>

// enum starts from 0 to n - 1
enum Directions {
  up,
  right,
  down,
  left
};


// enum can be return data type and function parameters
enum StatusCode {
  open,
  closed,
  working,
  prepare
};

// meaningless file function, just example
StatusCode read_file(int file_num) {
  if(file_num == 12) {
    return open;
  } else if(file_num == 9) {
    return prepare;
  } else {
    return closed;
  }
}


// better use string_view instead of std::string
constexpr std::string_view get_direction(Directions dir) {
  switch (dir) {
    case up: return "up";
    case right: return "right";
    case left: return "left";
    case down: return "down";
    default: return "???";
  }
}


// scoped enumeration - strongly typed (not convert to int) and strongly scoped
// work like namespace
enum class Color {
  red,
  green,
  blue,
};


int main() {
  Directions a {up};
  Directions b {right};
  Directions c {left};
  std::cout << a <<  std::endl;
  std::cout << b <<  std::endl;
  std::cout << c <<  std::endl;

  // enums can use in if statement
  if(a == up) {
    std::cout << "dir is up" <<  std::endl;
  } else {
    std::cout << "dir is not up" <<  std::endl;
  }

  std::cout << read_file(12) <<  std::endl;
  std::cout << read_file(11) <<  std::endl;
  std::cout << read_file(9) <<  std::endl;

  constexpr Directions d{up};
  std::cout << get_direction(d) <<  std::endl;


  // to print enum class member need to cast
  Color color {Color::red};
  std::cout << static_cast<int>(color) <<  std::endl;


  int input{};
  std::cin >> input;
  Directions di{static_cast<Directions>(input)};
  std::cout << di << std::endl;

  return 0;
}
