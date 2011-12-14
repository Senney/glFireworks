#include "PhysicsHandler.h"
#include <iostream>

using namespace Physics;

PhysicsHandler::PhysicsHandler() {
	
}

/* Adds a rule to the physics handler - Returns the index of the rule. */
int PhysicsHandler::addRule(PhysicsRule* rule) {
	rules.push_back(rule);
	return rules.size() - 1;
}

void PhysicsHandler::removeRule(int index) {
	if (index > (rules.size() - 1))
		return;
	rules.erase(rules.begin() + index);
}

void PhysicsHandler::apply(Objects::Object* obj) {
	if (obj) {
		for (int i = 0; i < rules.size(); i++) {
			obj->setAcceleration(rules[i]->accel());
			obj->update();
		}
	}
}
