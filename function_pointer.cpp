#include <iostream>
#include <functional>

int test_1() {
  return 12;
}

double test_2() {
  return 13;
}

int test_3(int a) {
  return a;
}


bool ascending(int x, int y) {
  return x > y;
}

bool descending(int x, int y) {
  return x < y;
}

// pass function as parameter
void sort(int* array, int size, bool (*cmp_function)(int, int) = ascending) {
  // some sorting logic
  std::cout << "sorted function " << (*cmp_function)(array[1], array[2]) << std::endl;
}


int main() {
  // address of function
  std::cout << reinterpret_cast<void*>(test_1) << std::endl;

  int (*func_ptr_1)(){ &test_1 };
  std::cout << func_ptr_1 << std::endl;

  // type missmatch
  // int (*func_ptr_2)(){ &test_2 };
  double (*func_ptr_2)(){ &test_2 };
  std::cout << func_ptr_2 << std::endl;

  int (*func_ptr_3)(int){ &test_3 };
  std::cout << func_ptr_3 << std::endl;

  // function null pointer
  int (*func_ptr_null)() { nullptr };


  // call function via pointer
  std::cout << (*func_ptr_1)() << std::endl;
  std::cout << (*func_ptr_3)(5) << std::endl;
  std::cout << func_ptr_2() << std::endl;


  // pseudo sort function, takes function as parameter
  int arr[5] {1, 4, 2, 3, 5};
  sort(arr, 5, ascending);
  sort(arr, 5, descending);
  sort(arr, 5);


  // modern function pointer declaration
  // mode readable
  std::function<int(int, int)> asc_func_pointer{&ascending};
  std::cout << asc_func_pointer(6, 4) << std::endl;
  std::cout << asc_func_pointer(3, 6) << std::endl;

  return 0;
}
