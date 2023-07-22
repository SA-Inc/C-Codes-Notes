#include <iostream>
#include <iterator>

// int* array and int array[] are same
void print_pointer_size(int* array) {
  std::cout << sizeof(array) << std::endl;
}

// this is main mistake (will use pointer)
void print_array_size(int array[]) {
  std::cout << sizeof(array) << std::endl;
}

void pass_array_by_pointer(int* ptr, int position, int value) {
  // ptr is copy of array address, but points to array
  // pointer arithmetic

  // *(array + n) is same as array[n]
  *(ptr + position) = value;
}


int main() {
  int array[] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // int(*)[] type
  std::cout << "0 element address: " << &array[0] << std::endl;
  std::cout << "0 element address: " << &array << std::endl;

  // int[] type
  std::cout << "decay pointer address: " << array << std::endl;

  // without & symbol (array var name is pointer itself)
  int* ptr {array};
  std::cout << "dereferencing array address: " << ptr << std::endl;
  // int**
  std::cout << "address of pointer: " << &ptr << std::endl;


  // size of whole array
  std::cout << sizeof(array) << std::endl;

  // sizr of array pointer
  std::cout << sizeof(ptr) << std::endl;


  print_pointer_size(array);
  print_array_size(array);

  pass_array_by_pointer(array, 2, 12);
  std::cout << "Array" << std::endl;
  for (int i = 0; i < std::size(array); ++i) {
    std::cout << array[i] << std::endl;
  }


  int array_length{static_cast<int>(std::size(array))};
  std::cout << "Loop Array via pointer" << std::endl;
  for (int* i = array; i != (array + array_length); ++i) {
    std::cout << i << " " << *i << std::endl;
  }

  return 0;
}
