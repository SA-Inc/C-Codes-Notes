#include <iostream>

struct Fraction {
  int numerator {};
  int denominator {};
};

struct ManyMembers {
  int a {};
  int b {};
  int c {};
  int d {1};
  int e {};
};


struct inner1 {
  int z {};
};

struct outer1 {
  int x {};
  int y {};

  inner1 inner {};
};


struct outer2 {
  struct inner2 {
    int z {};
  };

  int x {};
  int y {};

  inner2 inner {};
};


struct pad {
  // 2 + 4 + 8 bytes
  // order of declared members is obligarory
  short a {};
  int b {};
  double c {};

  // short, int, short = 12
  // int, short, short = 8
};


void print_struct(const ManyMembers& m) {
  std::cout << "Print Struct: " << m.a << " " << m.b << " " << m.c << " " << m.d << " " << m.e << std::endl;
}


Fraction return_decimal_tmp(int n, int d) {
  // return with temporal struct
  Fraction tmp {n, d};
  return tmp;
}

Fraction return_decimal_unnamed(int n, int d) {
  // return unnamed struct
  return Fraction {n, d};
}

Fraction return_decimal_deduction(int n, int d) {
  // return deducted struct
  return {n, d};
}


int main() {
  // member assignment
  Fraction a;
  a.numerator = 4;
  a.denominator = 7;
  std::cout << a.numerator << "." << a.denominator << std::endl;


  // initialization
  Fraction b {3, 9};
  std::cout << b.numerator << "." << b.denominator << std::endl;


  // const struct, members can not be changed
  const Fraction c {3, 9};
  std::cout << c.numerator << "." << c.denominator << std::endl;
  // c.numerator = 8;


  // Designated initializers
  ManyMembers m1{ .a = 5, .c = 3, .e = 6 };
  // ManyMembers m1{ .a{ 5 }, .c{ 3 } }; // warning in clang
  std::cout << m1.a << " " << m1.b << " " << m1.c << " " << m1.d << " " << m1.e << std::endl;

  // not defined members turn to 0
  m1 = { .a = m1.a, .b = 12, .c = 8 };
  std::cout << m1.a << " " << m1.b << " " << m1.c << " " << m1.d << " " << m1.e << std::endl;


  // pass by reference
  print_struct(m1);


  // return struct
  Fraction ret1 {return_decimal_tmp(45, 67)};
  std::cout << ret1.numerator << "." << ret1.denominator << std::endl;

  Fraction ret2 {return_decimal_unnamed(32, 85)};
  std::cout << ret2.numerator << "." << ret2.denominator << std::endl;

  Fraction ret3 {return_decimal_deduction(12, 54)};
  std::cout << ret3.numerator << "." << ret3.denominator << std::endl;


  // nested structs
  outer1 o1 {1, 2, {3}};
  std::cout << o1.x << " " << o1.y << " " << o1.inner.z << std::endl;

  outer2 o2 {4, 5, {6}};
  std::cout << o2.x << " " << o2.y << " " << o2.inner.z << std::endl;


  // actualy struct has 14 bytes, but 2 bytes adding by compiler for padding and data alignment
  std::cout << "struct size: " << sizeof(pad) << " bytes" << std::endl;

  return 0;
}
