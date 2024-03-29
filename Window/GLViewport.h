#ifndef GL_VIEWPORT_H
#define GL_VIEWPORT_H

#include <QtOpenGL/QGLWidget>

class Window;

class GLViewport : public QGLWidget {
public:
	GLViewport();
	
protected:
	virtual void initializeGL();
	virtual void paintGL();
	virtual void resizeGL(int width, int height);

private slots:
	void update();	
};

#endif
