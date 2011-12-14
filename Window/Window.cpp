#include "Window.h"

#include <QHBoxLayout>
#include <QString>

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
}

int Window::createWindow(int w, int h, const char* title) {
	// Handle window operations
	setWindowTitle(QString(title));
	setFixedSize(w, h);

	vp = new GLViewport();
	
	QWidget* container = new QWidget;
	QHBoxLayout* layout = new QHBoxLayout;
	layout->addWidget(vp);
	
	container->setLayout(layout);
	
	setCentralWidget(container);
	
	return 1;
}
