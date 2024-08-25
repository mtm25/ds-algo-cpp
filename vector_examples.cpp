#include "vector_examples.h"
#include <iostream>

namespace practice_cpp {
	void test_vector() {
		std::cout << "testing vectos\n";
	}

}


/* this also works*/
//void practice_cpp::test_vector() {
//	std::cout << "testing vector within namespace\n" << std::endl;
//}

/*
* This will not compile because the function is not in the correct namespace
*/
//void test_vector() {
//	std::cout << "testing vector within namespace\n" << std::endl;
//}