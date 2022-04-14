//
// Created by Louis-gabriel Laplante on 2022-04-13.
//

#ifndef PISCINE_CP_HUMANA_HPP
#define PISCINE_CP_HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
	private:
		Weapon &_weapon;
		std::string _name;
	public:
		void attack();
		HumanA(std::string name, Weapon &weapon1);
		~HumanA();
};


#endif //PISCINE_CP_HUMANA_HPP
