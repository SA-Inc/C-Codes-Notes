#include <iostream>

void while_break() {
  int count {0};

  // we not using flag, only break statement in if
  while (true) {
    std::cout << "'e' to exit from loop: ";
    char c {};
    std::cin >> c;

    if (c == 'e')
      break;

    ++count;
    std::cout << "iteration: " << count << std::endl;
  }


  // flag version
  // bool keep_loop {true};
  // while (keepLooping) {
  //   if (c == 'e')
  //     keepLooping = false;
  //   else {...}
  // }
}


void continue_for() {
  for (int count {0}; count < 10; ++count) {
    // skip iterations without nested block
    if ((count % 4) == 0)
      continue;

    std::cout << count << std::endl;


    // version with nested block
    // if ((count % 4) != 0) {
    //   std::cout << count << std::endl;
    // }


  }
}


int main() {
  continue_for();

  while_break();

  return 0;
}
