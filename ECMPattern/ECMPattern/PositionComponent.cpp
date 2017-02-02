#include "PositionComponent.h"

PositionComponent::PositionComponent() : m_x(0), m_y(0) {
}

int PositionComponent::getX() const {
	return m_x;
}

int PositionComponent::getY() const {
	return m_y;
}

void PositionComponent::setPosition(int x, int y) {
	m_x = x;
	m_y = y;
}
