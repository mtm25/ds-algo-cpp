#include "Cube.h"

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

}