#ifndef WINDOW_H
#define WINDOW_H

// QT Defs
#include <QMainWindow>

// Core
#include "GLViewport.h"

class Window : public QMainWindow { 
public:
	Window();
	Window(int w, int h);
	Window(int w, int h, const char* title);
	~Window();

private:
	int createWindow(int w, int h, const char* title);
	GLViewport* vp;
};

#endif
