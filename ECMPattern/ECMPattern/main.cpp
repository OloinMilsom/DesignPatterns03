#include <iostream>

#include "Alien.h"
#include "Cat.h"
#include "Dog.h"
#include "Player.h"

#include "ControlComponent.h"
#include "HealthComponent.h"
#include "PositionComponent.h"

int main() {
	//// entities
	Alien alien;
	Player player;
	Cat cat;
	Dog dog;

	alien.addComponent(new PositionComponent());
	alien.addComponent(new HealthComponent());

	player.addComponent(new HealthComponent());
	player.addComponent(new ControlComponent());
	player.addComponent(new PositionComponent());

	cat.addComponent(new PositionComponent());
	cat.addComponent(new HealthComponent());

	dog.addComponent(new PositionComponent());
	dog.addComponent(new HealthComponent());

	player.getComponent<PositionComponent>()->setPosition(12, 14);
	std::cout << player.getComponent<PositionComponent>()->getX() << std::endl;

	system("PAUSE");
}