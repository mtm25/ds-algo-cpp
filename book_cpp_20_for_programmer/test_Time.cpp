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


	void checkReferenceVsPointer() {
		Time time;
		time.setTime(15, 30, 30);

		//Time& ref_obj{time}; //this also works
		Time& ref_obj = time;
		//Time* ptr_obj{&time}; //this also works
		Time* ptr_obj = &time;

		std::cout << " Address for Time obj: " << &time << std::endl;
		std::cout << " Address for Alias Time obj: " << &ref_obj<< std::endl;
		std::cout << " Address for Pointer to Time obj: " << &ptr_obj<< std::endl;
		std::cout << " Pointer to Time obj: " << ptr_obj<< std::endl;
	}

	void test_Time() {
		//createTimeObjects();
		checkReferenceVsPointer();
	}
}