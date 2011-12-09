#ifndef WINDOW_OBJECT_HANDLER_H
#define WINDOW_OBJECT_HANDLER_H

#include <vector>

#include "../Objects/Object.h"

class WindowObjectHandler {
public:
	WindowObjectHandler();
	~WindowObjectHandler();
	
	// List management.
	int addObject(Objects::Object* obj);
	void deleteObject(int index);
	
	// Operations
	void drawAll();
	void draw(int index);
	
	void updateAll();
	void update(int index);
	
	// Modification
	void clear();
	
	// Checking
	bool isEmpty();
	int size();

private:
	std::vector<Objects::Object*> objects;
};

#endif
