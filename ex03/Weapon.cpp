//
// Created by Louis-gabriel Laplante on 2022-04-13.
//

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string name)
{
	this->_type = name;
}

Weapon::~Weapon()
{

}


const std::string Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(std::string name)
{
	this->_type = name;
}
