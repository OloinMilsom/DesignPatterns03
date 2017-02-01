#include "HealthComponent.h"

HealthComponent::HealthComponent() : m_health(100) {
}

int HealthComponent::getHealth() const {
	return m_health;
}

void HealthComponent::setHealth(int val) {
	m_health = val;
}
