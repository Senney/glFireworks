#include "GLViewport.h"
#include "Window.h"

// Local use.
#include <GL/gl.h>
#include <QTimer>

// DEBUG
#include <iostream>

class Window;

GLViewport::GLViewport() {
	std::cout << "Creating a timer." << std::endl;
	// Create an update timer.
	QTimer* timer = new QTimer;
	timer->setInterval(30);
	timer->setSingleShot(false);
	
	std::cout << "Connecting signals to slots." << std::endl;
	connect(timer, SIGNAL(timeout()), SLOT(update()));
	
	std::cout << "Starting timer." << std::endl;
	timer->start();
	std::cout << "Timer started." << std::endl;
}

void GLViewport::initializeGL() {
	glMatrixMode(GL_PROJECTION);
	
	// Load the current identity.
	glLoadIdentity();

	// Setup the our orthogonality matrix.
	glOrtho(-1, 1, 1, -1, 0, 1);
	
	// Set our clear color
	glClearDepth(1.0f);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	
	// Disable depth testing - 2D don't need none of that.
	glDisable(GL_DEPTH_TEST);
}

void GLViewport::resizeGL(int width, int height) {
	glMatrixMode(GL_PROJECTION);
	
	// Resize our viewport
	glViewport(0, 0, width, height);
	
	// Reset the orthoganality matrix.
	glOrtho(-1, 1, 1, -1, 0, 1);
}

void GLViewport::paintGL() {
	glMatrixMode(GL_MODELVIEW);
	
	// For now, let's just clear the color buffer so that we have something to show for ourselves.
	glClear(GL_COLOR_BUFFER_BIT);	
	
	// Main draw loop -> Here we'll loop through the objects that we wish to draw and... draw them :O
	Window* window = (Window*)parentWidget();
	
	// Just draw for now.
	window->getObjectHandler()->drawUpdateObjects();
}

void GLViewport::update() {
	// Call paintgl
	updateGL();
}
