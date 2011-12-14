#ifndef SENNEY_WINDOW_H
#define SENNEY_WINDOW_H

// QT Defs
#include <QMainWindow>
#include <QMouseEvent>

// Core
#include "../Physics/PhysicsHandler.h"
#include "../Physics/PhysicsRule.h"
#include "../Objects/ObjectHandler.h"
#include "../Objects/Particle.h"
#include "../Math/Point2D.h"
#include "../Math/Color.h"
#include "GLViewport.h"

class Window : public QMainWindow { 
public:
	// Window creation.
	Window();
	Window(int w, int h);
	Window(int w, int h, const char* title);
	~Window();
	
	// Accessors
	Math::Point2Di getSize() {
		return Math::Point2Di(w, h);
	}
	
	Objects::ObjectHandler* getObjectHandler() {
		return objects;
	}
	
protected:
	// Event handling.
	virtual void mouseReleaseEvent(QMouseEvent* event);
	
private:
	int createWindow(int w, int h, const char* title);
	GLViewport* vp;
	
	Objects::ObjectHandler* objects;
	
	int w, h;
};

#endif
