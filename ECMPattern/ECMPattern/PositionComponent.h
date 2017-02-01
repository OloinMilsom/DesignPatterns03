#pragma once

#include "Component.h"

struct Vector2 {
	int x, y;
};

class PositionComponent : public Component {
private:
	Vector2 m_pos;
public:
	PositionComponent();
	Vector2 getPosition() const;
	void setPosition(Vector2 val);
};