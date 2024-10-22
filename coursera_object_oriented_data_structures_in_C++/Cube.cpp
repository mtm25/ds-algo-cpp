#include "Cube.h"
#include <iostream>

namespace coursera_object_oriented_data_structures_in_cpp {

	double Cube::getVolume() {
		return length_ * length_ * length_;
	}

	double Cube::getSurfaceArea() {
		return 6 * length_ * length_;
	}

	void Cube::setLength(double length) {
		length_ = length;
	}

	//Create a construcot
	Cube::Cube() {
		length_ = 2;
		std::cout << " Default constructor invoked" << std::endl;
	}
	//Create a copy constructor
	Cube::Cube(const Cube& obj) {
		length_ = obj.length_;
		std::cout << " Copy constructor invoked" << std::endl;
	}

	void foo(const Cube c) {
		//do nothing
	}
	void createCubeObj() {
		Cube c; //invokes default constructor.
		std::cout << "Volume of copied object : " << c.getVolume() << std::endl;
		foo(c); //pass object by value


		Cube x = c;
		std::cout << "Volume of copied object : " << x.getVolume() << std::endl;
	}

	void test_cube() {
		createCubeObj();
	}

	//void test_cube() {
	//	//create a cube obj
	//	Cube c;
	//	//c.setLength(10.0);
	//	std::cout << "Volume: " << c.getVolume() << std::endl;
	//}

}