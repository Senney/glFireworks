// Graphics includes
#include <GL/gl.h>

// std includes
#include <iostream>

// QT includes
#include <QApplication>

// Core includes
#include "Math/Point2D.h"
#include "Physics/PhysicsHandler.h"
#include "Window/Window.h"

#include "Objects/Particle.h"

int main(int argc, char** argv) { 
	std::cout << "Fireworks Simulator : Under Construction!" << std::endl;
		
	QApplication qtApp(argc, argv);
		
	Math::Point2Df pos(0.0f, 0.0f);
	Math::Color col(100.0f, 100.0f, 100.0f);
	Objects::Particle temp(pos, col);
	
	Window glWindow(400, 400, "glFireworks");
	glWindow.show();	
	
	return 	qtApp.exec();
}
