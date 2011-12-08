#ifndef PARTICLE_H
#define PARTICLE_H

#include "Object.h"
#include "../Math/Point2D.h"
#include "../Math/Color.h"

#include "GL/gl.h"

namespace Objects {

class Particle : public Object {
public:
	Particle();
	Particle(Math::Point2Df pos, Math::Color color);
	
	void setColor(Math::Color color);
	Math::Color getColor();
	
	void draw();	
	
private: 
	Math::Color m_color;
};

}

#endif
