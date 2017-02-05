#include "Entity.h"
#include <algorithm>
#include <iostream>

Entity::Entity(std::string id) : m_id(id) {
}

void Entity::addComponent(Component * c) {
	m_components[&(typeid(*c))] = c;
}

void Entity::removeComponent(Component * c) {
	m_components.erase(&typeid(*c));
}

std::string Entity::getId() const {
	return m_id;
}
