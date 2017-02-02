#include "Component.h"

std::string Component::getTypeName() {
	return typeid(this).name();
}
