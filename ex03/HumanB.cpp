//
// Created by Louis-gabriel Laplante on 2022-04-13.
//

#include "HumanB.hpp"

HumanB::HumanB() {

}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB() {

}