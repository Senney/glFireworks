// Graphics includes
#include <GL/gl.h>

// std includes
#include <iostream>

// Core includes
#include "Math/Point2D.h"
#include "Physics/PhysicsHandler.h"
#include "Window/Window.h"

#include "Objects/Particle.h"

int main() { 
	std::cout << "Fireworks Simulator : Under Construction!" << std::endl;
		
	Math::Point2Df pos(0.0f, 0.0f);
	Math::Color col(100.0f, 100.0f, 100.0f);
	Objects::Particle temp(pos, col);
	
	GLWindow glWindow;
	glWindow.getObjectHandler()->addObject(&temp);
	
	// Create a new window.	
	glWindow.createWindow(500, 500);
	
	return 0;	
}
