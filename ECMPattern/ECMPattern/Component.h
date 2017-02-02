#pragma once

#include <string>
#include <typeinfo>

class Component {
public:
	virtual std::string getTypeName();
};