#pragma once

#include <unordered_map>
#include <typeinfo>
#include <string>
#include "Component.h"

class Entity {
protected: 
	std::string m_id;
	std::unordered_map<const std::type_info*, Component> m_components;
public:
	Entity(std::string id);
	void addComponent(Component c);
	void removeComponent(Component c);

	template <typename T>
	T getComponent() const {
		if (m_components.count(&typeid(T)) != 0) {
			return static_cast<T>(m_components[&typeid(T)]);
		}
		else {
			return T();
		}
	}
};