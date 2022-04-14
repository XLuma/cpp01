//
// Created by Louis-gabriel Laplante on 2022-04-12.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zom = new Zombie(name);
	return (zom);
}
