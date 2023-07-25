#include <iostream>
#include <string>

class DatePublic {
  public:
    int year {};
    int month {};
    int day {};

    void print() {
      std::cout << year << "-" << month << "-" << day << std::endl;
    }
};


class DatePrivate {
  int year {};
  int month {};
  int day {};

  public:
    void set(int y, int m, int d) {
      year = y;
      month = m;
      day = d;
    }

    void print() {
      std::cout << year << "-" << month << "-" << day << std::endl;
    }

    // private members can be accessed
    void copy_from(const DatePrivate& d) {
      year = d.year;
      month = d.month;
      day = d.day;
    }
};


int main() {
  DatePublic current_date_public {2023, 7, 25};
  current_date_public.print();

  DatePrivate current_date_private;
  current_date_private.set(2023, 8, 25);
  current_date_private.print();

  DatePrivate current_date_private_new;
  current_date_private_new.set(2023, 9, 27);

  current_date_private.copy_from(current_date_private_new);
  current_date_private.print();

  return 0;
}
