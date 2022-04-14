//
// Created by Louis-gabriel Laplante on 2022-04-12.
//

#include "Zombie.hpp"

int main()
{
	Zombie *zombie = new Zombie("Alice");

	randomChump("Bob");
	zombie->Announce();

	delete zombie;
}
