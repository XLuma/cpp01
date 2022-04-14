//
// Created by Louis-gabriel Laplante on 2022-04-12.
//

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zom = Zombie(name);
	zom.Announce();
}

