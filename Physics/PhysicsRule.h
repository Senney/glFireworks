#ifndef PHYSICS_RULE_H
#define PHYSICS_RULE_H

#include "../Math/Point2D.h"

namespace Physics {

class PhysicsRule {
public:
	/* Constructor */
	PhysicsRule();
	
	/* Setters */
	void setAccel(float x, float y);
	void setAccel(Math::Point2Df& accel);
	
	/* Getters */
	Math::Point2Df accel();
	
private:
	Math::Point2Df m_accel;
};

}

#endif
