// Graphics includes
#include <GL/gl.h>

// std includes
#include <iostream>

// Core includes
#include "Point2D.h"

int main(int argv, char** argc) { 
	std::cout << "Fireworks Simulator : Under Construction!" << std::endl;
	
	Math::Point2D<float> test(6.f, 3.f);
	test = test + 6.f;
	std::cout << "Vector Add - (" << test.getX() << ", " << test.getY() << ")" << std::endl;
}
