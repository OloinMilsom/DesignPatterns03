#pragma once

#include <unordered_map>
#include <typeinfo>
#include "Component.h"

class Entity {
protected: 
	int m_id;
	std::unordered_map<const std::type_info*, Component> m_components;
public:
	Entity();
	void addComponent(Component c);
	void removeComponent(Component c);

	template <typename T>
	T getComponent() const {
		if (m_components.count(&typeid))
	}
};