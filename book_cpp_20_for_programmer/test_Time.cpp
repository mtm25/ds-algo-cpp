#include "Time.h"
#include <iostream>

namespace book_cpp_20_for_programmers {

	void createTimeObjects() {
		Time time;
		/*time.setTime(15, 20, 30);*/
		//time.setTime(12, 50, 30);
		//time.setTime(11, 50, 30);
		//time.setTime(00, 25, 35);
		time.setTime(12, 00, 00);

		//time.setTime(23, 61, 30);

		std::cout << " Time in 24 hour format is : " <<  time.to24HourString() << std::endl;
		std::cout << " Time in 12 hour format is : " << time.to12HourString() << std::endl;
	}

	void test_Time() {
		createTimeObjects();
	}
}