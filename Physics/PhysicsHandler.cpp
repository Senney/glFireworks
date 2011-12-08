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

int PhysicsHandler::addObject(Objects::Object& obj) {
	objs.push_back(&obj);
	return objs.size() - 1;
}

void PhysicsHandler::removeObject(int index) {
	if (index > (objs.size() - 1) || index < 0)
		return;
	objs.erase(objs.begin() + index);
}	

void PhysicsHandler::update() {
	for (int j = 0; j < objs.size(); j++) {
		for (int i = 0; i < rules.size(); i++) {
			Objects::Object* cur = objs.at(j);
			PhysicsRule* curRule = rules.at(i);
			cur->setAcceleration(curRule->accel());
		}
	}
}
