
#pragma once
#include <string>

namespace book_cpp_20_for_programmers {


class Time {
  public:
    void setTime(int hour, int minute, int second);
    std::string to24HourString() const;
    std::string to12HourString() const;

  private:
    int hour_{0}; // 0 - 23 (24-hour clock format) 
    int min_{0};  // 0 - 59
    int second_{0};  // 0 - 59

    bool isTimeSet_ = false;
};

void test_Time();

}
// The private data members are using in-class initializer to set to 0 as defualt value when an objet is created
// For member functions to24HourString and to12HourString, the const keyword
// must appear in both the function prototypes and the function definitions.