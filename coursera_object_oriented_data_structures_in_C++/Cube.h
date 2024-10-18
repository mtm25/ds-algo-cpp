//Instructions beginning with # are special commands for the compiler called preprocessor directives.
// This instruction prevents the header file from being automatically included multiple times in a complex project, which would cause errors.
#pragma once

namespace coursera_object_oriented_data_structures_in_cpp {
	class Cube {
	public:
		double getVolume();
		double getSurfaceArea();
		void setLength(double length);
	private:
		double length_;
	};

}

// The function will be defined in the Cube.cpp source code file.

