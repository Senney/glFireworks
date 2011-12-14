#include "GLViewport.h"
#include <GL/gl.h>

GLViewport::GLViewport() {
	
}

void GLViewport::initializeGL() {
	glMatrixMode(GL_PROJECTION);
	
	// Load the current identity.
	glLoadIdentity();

	// Setup the our orthogonality matrix.
	glOrtho(-1, 1, -1, 1, 0, 1);
	
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
	glOrtho(-1, 1, -1, 1, 0, 1);
}

void GLViewport::paintGL() {
	glMatrixMode(GL_MODELVIEW);
	glClear(GL_COLOR_BUFFER_BIT);	
}
