#include "Window.h"

GLWindow::GLWindow() {
	att[0] = GLX_RGBA;
	att[1] = GLX_DEPTH_SIZE;
	att[2] = 24;
	att[3] = GLX_DOUBLEBUFFER;
	att[4] = None;
}

void GLWindow::createWindow(int w, int h) {
	// Create window for computer - NULL indicates that there is no external display.
	dpy = XOpenDisplay(NULL);
	if (dpy == NULL) {
		std::cout << "ERROR: Cannot initialize XDisplay.\n";
		return;
	}
	
	// Setup root window.
	root = DefaultRootWindow(dpy);
	
	vi = glXChooseVisual(dpy, 0, att);
	if (vi == NULL) {
		std::cout << "Could not create visual for this window.\n";
		return;
	}
	cmap = XCreateColormap(dpy, root, vi->visual, AllocNone);	
	swa.colormap = cmap;
	swa.event_mask = ExposureMask | KeyPressMask | StructureNotifyMask;
	
	// Create the window.
	win = XCreateWindow(dpy, root, 0, 0, w, h, 0, vi->depth, InputOutput, vi->visual, CWColormap | CWEventMask, &swa);
	
	// Map the window and store it w/ a name.
	XMapWindow(dpy, win);
	XStoreName(dpy, win, "OpenGL Fireworks");
	
	glc = glXCreateContext(dpy, vi, NULL, GL_TRUE);
	glXMakeCurrent(dpy, win, glc);
	
	// Disable depth testing.
	glDisable(GL_DEPTH_TEST);
	
	// Main loop.
	while (1) {
		XNextEvent(dpy, &xev);
		if (xev.type == Expose) {
			XGetWindowAttributes(dpy, win, &gwa);
			glViewport(0, 0, gwa.width, gwa.height);
			
			/* MAIN DRAW AREA */
			glClearColor(0.0, 0.0, 0.0, 1.0);
			glClear(GL_COLOR_BUFFER_BIT);
			
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();
			glOrtho(-1.0, 1.0, -1.0, 1.0, -1, 1);
			/* END MAIN DRAW AREA */
			
			glXSwapBuffers(dpy, win);
		} else if (xev.type == DestroyNotify) {
			std::cout << "Destory Notify detected (" << DestroyNotify << ")." << std::endl;
			glXMakeCurrent(dpy, None, NULL);
			glXDestroyContext(dpy, glc);
			XDestroyWindow(dpy, win);
			XCloseDisplay(dpy);
			return;
		}
	}
}
