#include "AISytem.h"
#include <iostream>
#include "PositionComponent.h"
#include "HealthComponent.h"

void AISystem::addEntity(Entity e) {
	m_entities.push_back(e);
}

void AISystem::update() {
	std::cout << "AI System Update" << std::endl;
	for (int i = 0; i < m_entities.size(); i++) {
		std::cout << "\tUpdating " << m_entities[i].getId() << ":" << std::endl;
		PositionComponent * temp = m_entities[i].getComponent<PositionComponent>();
		std::cout << "\t\tPosition: " << temp->getX() << ", " << temp->getY() << std::endl;
		std::cout << "\t\tHealth: " << m_entities[i].getComponent<HealthComponent>()->getHealth() << std::endl;
	}
	std::cout << std::endl;
}
