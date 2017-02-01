#pragma once

#include "Component.h"

class HealthComponent : public Component {
private:
	int m_health;
public:
	HealthComponent();
	int getHealth() const;
	void setHealth(int val);
};