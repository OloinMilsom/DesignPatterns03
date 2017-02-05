#pragma once

#include "Entity.h"

class AISystem {
private:
	std::vector<Entity> m_entities;
public:
	void addEntity(Entity e);
	void update();
};