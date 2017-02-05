#pragma once

#include "Component.h"
#include <Windows.h>

class ControlComponent : public Component {
private:
	int m_upKey;
	int m_leftKey;
	int m_downKey;
	int m_rightKey;
public:
	ControlComponent();
	int getUpKey();
	int getLeftKey();
	int getDownKey();
	int getRightKey();
};