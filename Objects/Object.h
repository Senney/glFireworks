#ifndef OBJECTS_H
#define OBJECTS_H

#include "../Math/Point2D.h"

namespace Objects {

class Object {
public:
	Object();
	Object(Math::Point2Df position);
	
	virtual void draw();
	virtual void update();
	
	void setAcceleration(Math::Point2Df accel);
	void setVelocity(Math::Point2Df vel);
	void setPosition(Math::Point2Df pos);
	
	Math::Point2Df getAcceleration();
	Math::Point2Df getVelocity();
	Math::Point2Df getPosition();
private:
	Math::Point2Df m_accel;
	Math::Point2Df m_vel;
	Math::Point2Df m_pos;
};

}

#endif
