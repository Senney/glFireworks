#ifndef PHYSICS_HANDLER_H
#define PHYSICS_HANDLER_H

#include <vector>
#include "../Handler.h"
#include "PhysicsRule.h"

namespace Physics {

/* A handler class for taking care of physics calculations and such. */
class PhysicsHandler : public Handler {
public:
	/* Constructors */
	PhysicsHandler();
	
	/* Rule management */
	int addRule(PhysicsRule& rule);
	void removeRule(int index);
	
	/* Update */
	virtual void update();
	
private:
	std::vector<PhysicsRule*> rules;
};

}

#endif
