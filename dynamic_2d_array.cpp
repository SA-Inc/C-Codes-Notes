#include <iostream>

int get_matrix_index(int row, int col, int cols) {
  // formula to get index 1d array as it 2d array
  return (row * cols) + col;
}


int main() {
  std::cout << "1D Array Pointer" << std::endl;
  // allocate array of pointers
  int** array {new int* [5]};

  std::cout << array << std::endl;

  // each array element has null pointer
  for (int i = 0; i < 5; ++i) {
    std::cout << &array[i] << " " << array[i] << std::endl;
  }

  delete[] array;
  array = nullptr;



  // try to allocate two dim array - this not work!!!
  // int** array { new int[10][5] };

  std::cout << "2D Array Pointer" << std::endl;
  // alloc 2d array
  // 1st rows, then cols
  constexpr int rows {5};
  constexpr int cols {3};

  int** matrix {new int* [rows]};
  for (int row {0}; row < rows; ++row) {
    matrix[row] = new int[cols];
  }

  matrix[2][1] = 4;

  for (int row {0}; row < rows; ++row) {
    for (int col {0}; col < cols; ++col) {
      std::cout << row << " " << col << " " << &matrix[row][col] << " " << matrix[row][col] << std::endl;
    }
  }

  // free memory
  for (int row {0}; row < rows; ++row) {
    delete[] matrix[row];
  }
  delete[] matrix;


  std::cout << "2D Array as 1D Array" << std::endl;
  // 2d array as 1d array
  int* array_flat {new int[15]};

  array_flat[get_matrix_index(2, 1, cols)] = 6;

  for (int element {0}; element < (rows * cols); ++element) {
    std::cout << element << " " << &array_flat[element] << " " << array_flat[element] << std::endl;
  }

  return 0;
}
