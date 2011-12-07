// Graphics includes
#include <GL/gl.h>

// std includes
#include <iostream>

// Core includes
#include "Math/Point2D.h"
#include "Physics/PhysicsHandler.h"
#include "Window/Window.h"

int main(int argv, char** argc) { 
	std::cout << "Fireworks Simulator : Under Construction!" << std::endl;
	
	Physics::PhysicsHandler physicsHandler();		
	GLWindow glWindow;
	glWindow.createWindow(500, 500);
	
	return 0;	
}
