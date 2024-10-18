#pragma once
#include "Cube.h"
#include <iostream>


namespace coursera_object_oriented_data_structures_in_cpp {
	void test_cube() {
		//create a cube obj
		Cube c;
		c.setLength(10.0);
		std::cout << "Volume: " << c.getVolume() << std::endl;
	}
}