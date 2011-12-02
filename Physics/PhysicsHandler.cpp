#include "PhysicsHandler.h"

using namespace Physics;

PhysicsHandler::PhysicsHandler() {
	
}

/* Adds a rule to the physics handler - Returns the index of the rule. */
int PhysicsHandler::addRule(PhysicsRule& rule) {
	rules.push_back(&rule);
	return rules.size() - 1;
}

void PhysicsHandler::removeRule(int index) {
	if (index > (rules.size() - 1))
		return;
	rules.erase(rules.begin() + index);
}

void PhysicsHandler::update() {
	std::vector<PhysicsRule*>::iterator iter;
	for (iter = rules.begin(); iter < rules.end(); iter++)
	{
		// Handle object updates in hurrrr.
	}
}
