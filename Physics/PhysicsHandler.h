#ifndef PHYSICS_HANDLER_H
#define PHYSICS_HANDLER_H

#include <vector>
#include "../Objects/Object.h"
#include "PhysicsRule.h"

namespace Physics {

/* A handler class for taking care of physics calculations and such. */
class PhysicsHandler {
public:
	/* Constructors */
	PhysicsHandler();
	
	/* Rule management */
	int addRule(PhysicsRule* rule);
	void removeRule(int index);
	
	/* Object management */
	void apply(Objects::Object* obj);
	
private:
	std::vector<PhysicsRule*> rules;
};

}

#endif
