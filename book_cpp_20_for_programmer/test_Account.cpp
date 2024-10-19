#include "Account.h"
#include <iostream>

namespace book_cpp_20_for_programmers {
	//Create account obj with default constructor'
	//void test_create_account_default_constructor() {
	//	Account obj; //this will invoke the compiler created default constructor
	//	std::cout << "Account Name: " << obj.getName() << std::endl;

	//	Account obj2; //this will invoke the compiler created default constructor
	//	std::cout << "Account Name: " << obj2.getName() << std::endl;
	//}

	void test_create_account_custom_constructor() {
		Account obj{"Joe Black"}; //this will invoke the compiler created default constructor
		std::cout << "Account Name: " << obj.getName() << std::endl;

		Account obj2{ "Donald Duck" }; //this will invoke the compiler created default constructor
		std::cout << "Account Name: " << obj2.getName() << std::endl;
	}

		
	void test_account() {
		//test_create_account_default_constructor();
		test_create_account_custom_constructor();
	}


}
