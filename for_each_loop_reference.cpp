#include <iostream>

// for-each do not work with pointers (pointers do not know size of array)
// void try_print(const std::string array[]) {
//   for (const std::string element : array) {
//     std::cout << element << std::endl;
//   }
// }


int main() {
  // looping strings are complicated operations
  std::string array[] { "abc", "def", "xyz", "123", "456", "789" };
  int nums[] {12, 45, 84, 34, 97, 76};

  // copy array element to iterator (expensive)
  for (std::string element : array) {
    std::cout << element << ' ';
  }

  std::cout << std::endl;

  // access by reference (cheap)
  for (const std::string& element : array) {
    std::cout << element << ' ';
  }

  return 0;
}
