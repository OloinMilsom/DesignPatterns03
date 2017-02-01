#include "PositionComponent.h"

PositionComponent::PositionComponent() : m_pos({ 0,0 }) {
}

Vector2 PositionComponent::getPosition() const {
	return m_pos;
}

void PositionComponent::setPosition(Vector2 val) {
	m_pos = val;
}
