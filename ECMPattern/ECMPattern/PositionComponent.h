#pragma once

#include "Component.h"

class PositionComponent : public Component {
private:
	int m_x;
	int m_y;
public:
	PositionComponent();
	int getX() const; 
	int getY() const;
	void setPosition(int x, int y);
};