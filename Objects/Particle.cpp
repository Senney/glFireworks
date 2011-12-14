#include "Particle.h"

#include "GL/gl.h"

using namespace Objects;

Particle::Particle() { }

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
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(m_pos.X(), m_pos.Y() + 0.03f);
	glVertex2f(m_pos.X() - 0.03f, m_pos.Y());
	glVertex2f(m_pos.X() + 0.03f, m_pos.Y());
	glEnd();
}
