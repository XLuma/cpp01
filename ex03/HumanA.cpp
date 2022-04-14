//
// Created by Louis-gabriel Laplante on 2022-04-13.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon1) : _weapon(weapon1),_name(name) //: with members to initialise them outside of function body
{
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}