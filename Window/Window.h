#ifndef WINDOW_H
#define WINDOW_H

#include "GL/gl.h"
#include "GL/glx.h"

class WindowFactory {
public:
	Window();
	
	void createWindow();	
}

#endif
