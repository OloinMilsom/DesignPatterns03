#include "Entity.h"
#include <algorithm>

Entity::Entity() {
}

void Entity::addComponent(Component c) {
	m_components[&typeid(c)] = c;
}

void Entity::removeComponent(Component c) {
	m_components.erase(&typeid(c));
}
