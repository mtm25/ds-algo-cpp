#include "Time.h"
#include <iostream>

namespace book_cpp_20_for_programmers {
	void Time::setTime(int hour, int minute, int second) {

		if (hour < 0 || hour >= 24 ||
			minute < 0 || minute >= 60 ||
			second < 0 || second >= 60
			) {
			std::cout << " Time not set" << std::endl;
			return;			
		}

		hour_ = hour;
		min_ = minute;
		second_ = second;

		isTimeSet_ = true;
	}

	std::string Time::to24HourString() const {
		if (!isTimeSet_) return "";
		std::string result = "" + std::to_string(hour_) + ":";
		result = result + std::to_string(min_) + ":";
		result = result + std::to_string(second_);
		return result;
	}

	std::string Time::to12HourString() const {
		if (!isTimeSet_) return "";
		std::string result = "" + std::to_string(hour_%12 == 0 ? 12 : hour_%12) + ":";
		result = result + std::to_string(min_) + ":";
		result = result + std::to_string(second_);

    //Add a AM PM indicator
    result = result + (hour_ >= 12 ? " PM" : " AM");
		return result;
	}

}