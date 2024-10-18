#include <iostream>
#include "simple_examples.h"
//What happens when you return the address of a local variable


namespace practice_cpp {

	int* returnLocalVar() {
		int num = 10;
		return &num;
	}


	

	//reference variable 
	void check_reference_variable() {
		int* stk_ptr = new int; //stk_ptr is a pointer to an int created in the stack, and points to a mem location on the heap for an int variable
		int& ref_var = *stk_ptr; //ref_val is an alias to the int varaible that stk_ptr is pointing to - it will have the same address in heap where the new int is allocatd

		std::cout << " Content of stk_ptr " << stk_ptr << std::endl;
		std::cout << " Address of ref_var " << &ref_var << std::endl;

		//assing a number to the heap variable
		*stk_ptr = 10;
		std::cout << " Content of heap variable: " << *stk_ptr << std::endl;
		ref_var = 20;
		std::cout << " Content of heap variable from ref_var: " << ref_var << std::endl;
		std::cout << " Content of heap variable: " << *stk_ptr << std::endl;
	}

	//void test_check_reference_variable() {
	//	check_reference_variable();
	//}


	void demo_simple_examples()
	{
		/*int* p = returnLocalVar();
		std::cout << " Data " << *p; */

		//std::cout << " Data " << *returnLocalVar(); //this prints the correct value of num, but it is still not incorrect to return a local variable

		check_reference_variable();
	}

}