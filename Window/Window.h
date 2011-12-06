#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>

#include "X11/X.h"
#include "X11/Xlib.h"
#include "GL/gl.h"
#include "GL/glx.h"
#include "GL/glu.h"

class GLWindow {
public:
	GLWindow();
	
	void createWindow(int w, int h);	
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
};

#endif
