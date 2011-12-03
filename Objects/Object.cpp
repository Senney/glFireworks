#include "Object.h"

using namespace Objects;

Object::Object() {
}

Object::Object(Math::Point2Df position) {
	m_pos = position;
}

void Object::draw() { }

void Object::update() {
	m_pos += m_vel;
	m_vel += m_accel;
}

void Object::setAcceleration(Math::Point2Df accel) {
	m_accel = accel;
}

void Object::setVelocity(Math::Point2Df vel) {
	m_vel = vel;
}

void Object::setPosition(Math::Point2Df pos) {
	m_pos = pos;
}

Math::Point2Df Object::getAcceleration() {
	return m_accel;
}

Math::Point2Df Object::getVelocity() {
	return m_vel;
}

Math::Point2Df Object::getPosition() {
	return m_pos;
}
