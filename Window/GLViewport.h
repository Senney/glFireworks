#ifndef GL_VIEWPORT_H
#define GL_VIEWPORT_H

#include <QGLWidget>

#include "Window.h"

class GLViewport : public QGLWidget {
public:
	GLViewport(Window* parent);
	
protected:
	void paintGL();
	
};

#endif
