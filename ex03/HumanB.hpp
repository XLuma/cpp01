//
// Created by Louis-gabriel Laplante on 2022-04-13.
//

#ifndef PISCINE_CP_HUMANB_HPP
#define PISCINE_CP_HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon; //Pointer because this class doesn't need its weapon initialised right away
	public:
		HumanB();
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack();
		~HumanB();
};


#endif //PISCINE_CP_HUMANB_HPP
