#include "WindowObjectHandler.h"

WindowObjectHandler::WindowObjectHandler() {

}

WindowObjectHandler::~WindowObjectHandler() {

}

int WindowObjectHandler::addObject(Objects::Object* obj) {
	objects.push_back(obj);
	return objects.size() - 1;
}

void WindowObjectHandler::deleteObject(int index) {
	if ((index + 1) > objects.size())
		return;
	objects.erase(objects.begin() + index);
}

void WindowObjectHandler::drawAll() {
	for (int i = 0; i < objects.size(); i++)
	{
		Objects::Object* temp = objects[i];
		temp->draw();
	}
}

void WindowObjectHandler::draw(int index) {
	if (index > objects.size() || index < 0)
		return;
	Objects::Object* temp = objects[index];
	temp->draw();
}

void WindowObjectHandler::clear() {
	objects.clear();
}

bool WindowObjectHandler::isEmpty() {
	return (objects.size() == 0);
}
int WindowObjectHandler::size() {
	return objects.size();
}

