#include "ControlSystem.h"
#include <iostream>
#include "PositionComponent.h"
#include "ControlComponent.h"

void ControlSystem::addEntity(Entity e) {
	m_entities.push_back(e);
}

void ControlSystem::update() {
	std::cout << "Control System Update" << std::endl;
	for (int i = 0; i < m_entities.size(); i++) {
		std::cout << "\tUpdating " << m_entities[i].getId() << std::endl;
		PositionComponent * temp1 = m_entities[i].getComponent<PositionComponent>();
		ControlComponent * temp2 = m_entities[i].getComponent<ControlComponent>();
		std::cout << "\t\tPosition: " << temp1->getX() << ", " << temp1->getY() << std::endl;
		std::cout << "\t\tUp Key Pressed: " << (GetAsyncKeyState(temp2->getUpKey()) ? "true" : "false") << std::endl;
		std::cout << "\t\tLeft Key Pressed: " << (GetAsyncKeyState(temp2->getLeftKey()) ? "true" : "false") << std::endl;
		std::cout << "\t\tDown Key Pressed: " << (GetAsyncKeyState(temp2->getDownKey()) ? "true" : "false") << std::endl;
		std::cout << "\t\tRight Key Pressed: " << (GetAsyncKeyState(temp2->getRightKey()) ? "true" : "false") << std::endl;
	}
	std::cout << std::endl;
}
