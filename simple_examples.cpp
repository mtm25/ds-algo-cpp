#include <iostream>
#include "simple_examples.h"
//What happens when you return the address of a local variable


namespace practice_cpp {

	int* returnLocalVar() {
		int num = 10;
		return &num;
	}


	void demo_simple_examples()
	{
		int* p = returnLocalVar();
		std::cout << " Data " << *p; 

		//std::cout << " Data " << *returnLocalVar(); //this prints the correct value of num, but it is still not incorrect to return a local variable

	}

}