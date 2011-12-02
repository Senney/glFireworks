#include "PhysicsRule.h"

using namespace Physics;

PhysicsRule::PhysicsRule() {
	m_accel = Math::Point2Df(0.0f, 0.0f);
}

void PhysicsRule::setAccel(float x, float y) {
	m_accel.setX(x);
	m_accel.setY(y);
}

void PhysicsRule::setAccel(Math::Point2Df& accel) {
	m_accel = accel;
}

Math::Point2Df PhysicsRule::accel() {
	return m_accel;
}
