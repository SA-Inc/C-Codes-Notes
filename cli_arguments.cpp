#include <iostream>
#include <sstream>

// argc - arguments count (1st slways program name)
// argv - argument values (array of char pointers, points to a C-style string)
int main(int argc, char const* argv[]) {
  std::cout << argc << std::endl;

  for (int count{0}; count < argc; ++count) {
    std::cout << count << " " << argv[count] << std::endl;
  }


  // program usage
  if (argc <= 1) {
    if (argv[0])
      std::cout << "Usage: " << argv[0] << " <number>" << std::endl;
    else
      std::cout << "Usage: <program name> <number>" << std::endl;

    return 1;
  }


  std::stringstream convert{argv[1]};
  int arg_num {};
  // try to convert
  if (!(convert >> arg_num)) {
    arg_num = 0;
  }

  std::cout << "Arg Number: " << arg_num << std::endl;

  return 0;
}
