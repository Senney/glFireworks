#include "Window.h"

#include <QHBoxLayout>
#include <QString>

#include <iostream>

Window::Window() {
	createWindow(200, 200, "QT Window");
}

Window::Window(int w, int h) {
	createWindow(w, h, "QT Window");
}

Window::Window(int w, int h, const char* title) {
	createWindow(w, h, title);
}

Window::~Window() {
	delete vp;
	delete objects;
}

int Window::createWindow(int w, int h, const char* title) {
	this->w = w, this->h = h;
	// Handle window operations
	setWindowTitle(QString(title));
	setFixedSize(w, h);

	// Create our viewport and set it to be the entire window.
	vp = new GLViewport();
	setCentralWidget(vp);
	
	// Create physics and object handlers.
	Physics::PhysicsHandler* physics = new Physics::PhysicsHandler();
	Physics::PhysicsRule* gravity = new Physics::PhysicsRule;
	gravity->setAccel(0.0f, -0.01f);
	physics->addRule(gravity);
	objects = new Objects::ObjectHandler(this, physics);
	
	return 1;
}

void Window::mouseReleaseEvent(QMouseEvent* event) {
	if (event->button() == Qt::LeftButton) {
		Math::Point2Df pos;
		float w_rat = .5 * w;
		float h_rat = .5 * h;
		pos.setX((float)(event->x() - w_rat) / w_rat);
		pos.setY(-((float)(event->y() - h_rat) / h_rat));
		Objects::Particle* tmp = new Objects::Particle(pos, Math::Color(1.0f, 1.0f, 1.0f));
		objects->addObject(tmp);
	}
}
