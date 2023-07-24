#include <iostream>

int main() {
  std::cout << "Enter a positive array length: ";
  int length {};
  std::cin >> length;

  // allocate bunch of memory
  // new[] track how much memory allocated, and delete[] also know
  int* array { new int[length]{} };

  for (int i = 0; i < length; ++i) {
    array[i] = i;
    std::cout << &array[i] << " " << array[i] << std::endl;
  }

  std::cout << "Array size: " << (length * sizeof(int)) << " Bytes" << std::endl;

  // free bunch of memory
  delete[] array;
  array = nullptr;

  return 0;
}
