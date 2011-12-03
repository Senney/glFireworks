#include "Particle.h"

using namespace Objects;

Paticle::Particle() { }

Particle::Particle(Math::Point2Df pos, Math::Color color) {
	m_color = color;
	m_pos = pos;
}

void Particle::setColor(Math::Color color) {
	m_color = color;
}

Math::Color Particle::getColor() {
	return m_color;
}

void Particle::draw() {
	glBegin(GL_POINTS);
	glColor3f(m_color.r(), m_color.g(), m_color.b());
	glVertex2f(m_pos.x(), m_pos.y());
	glEnd();
}
