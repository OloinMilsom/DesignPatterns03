#include <iostream>

#include "Alien.h"
#include "Cat.h"
#include "Dog.h"
#include "Player.h"

#include "ControlComponent.h"
#include "HealthComponent.h"
#include "PositionComponent.h"

int main() {
	// entities
	Alien alien;
	Player player;
	Cat cat;
	Dog dog;

	alien.addComponent(PositionComponent());
	alien.addComponent(HealthComponent());

	player.addComponent(HealthComponent());
	player.addComponent(ControlComponent());
	player.addComponent(PositionComponent());

	cat.addComponent(PositionComponent());
	cat.addComponent(HealthComponent());

	dog.addComponent(PositionComponent());
	dog.addComponent(HealthComponent());

	std::cout << player.getComponent<PositionComponent>().getPosition().x << std::endl;

	system("PAUSE");
}