#include <iostream>
#include <thread>

#include "Alien.h"
#include "Cat.h"
#include "Dog.h"
#include "Player.h"

#include "ControlComponent.h"
#include "HealthComponent.h"
#include "PositionComponent.h"

#include "AISytem.h"
#include "ControlSystem.h"
#include "RenderSystem.h"

int main() {
	// systems
	AISystem aiSystem;
	ControlSystem controlSystem;
	RenderSystem renderSystem;

	// entities
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

	dog.addComponent(new PositionComponent());
	dog.addComponent(new HealthComponent());

	aiSystem.addEntity(alien);
	aiSystem.addEntity(dog);

	controlSystem.addEntity(player);

	renderSystem.addEntity(alien);
	renderSystem.addEntity(player);
	renderSystem.addEntity(cat);
	renderSystem.addEntity(dog);

	while (true) {
		std::cout << "-----------------------------------" << std::endl;

		aiSystem.update();
		controlSystem.update();
		renderSystem.update();

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}

	system("PAUSE");
}