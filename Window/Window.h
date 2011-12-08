#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>

/* X11 Includes */
#include "X11/X.h"
#include "X11/Xlib.h"
#include "X11/Xatom.h"

/* OpenGL Includes */
#include "GL/gl.h"
#include "GL/glx.h"
#include "GL/glu.h"

/* glFireworks Includes */
#include "WindowObjectHandler.h"

class GLWindow {
public:
	GLWindow();
	~GLWindow();
	
	void createWindow(int w, int h);
	bool isOpened();
	
	WindowObjectHandler* getObjectHandler() { return &objs; }		
private:
	Display* dpy;
	Window root;
	GLint att[5];
	XVisualInfo *vi;
	Colormap cmap;
	XSetWindowAttributes swa;
	Window win;
	GLXContext glc;
	XWindowAttributes gwa;
	XEvent xev;
	
	WindowObjectHandler objs;
};

#endif
