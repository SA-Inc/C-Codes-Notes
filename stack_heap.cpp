#include <iostream>

int func(int x) {
  return x;
}

// stack
// - fast and simple memory allocaton
// - exists in function context
// - compile time memory
// - small size

// heap
// - a little bit more complicated allocation
// - need to control and free memory
// - runtime memory
// - large size


// main function also push on stack
int main() {

  // func with argument push on stack and pop when done
  func(5);

  // stackoverflow. By default stack has 1MB
  // bottom array circa 40MB
  // int stack[10000000];
  // std::cout << "hi" << stack[0];


  // alocate on heap
  int* ptr { new int };
  int* array { new int[10] };

  return 0;
}
