//
// Created by Louis-gabriel Laplante on 2022-04-12.
//

#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(std::string name)
{
	//constructor
	this->_name = name;
}

Zombie::~Zombie()
{
 	//deconstructor
	 std::cout << "Zombie " << this->_name << " deconstructed" << std::endl;
}

void Zombie::Announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name)
{
	this->_name = name;
}
