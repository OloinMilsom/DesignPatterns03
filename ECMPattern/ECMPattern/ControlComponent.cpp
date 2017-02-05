#include "ControlComponent.h"

ControlComponent::ControlComponent() : m_upKey(VK_UP), m_leftKey(VK_LEFT), m_downKey(VK_DOWN), m_rightKey(VK_RIGHT) {
}

int ControlComponent::getUpKey() {
	return m_upKey;
}

int ControlComponent::getLeftKey() {
	return m_leftKey;
}

int ControlComponent::getDownKey() {
	return m_downKey;
}

int ControlComponent::getRightKey() {
	return m_rightKey;
}
