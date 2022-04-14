//
// Created by Louis-gabriel Laplante on 2022-04-13.
//

#ifndef PISCINE_CP_WEAPON_H
#define PISCINE_CP_WEAPON_H

#include <string>
#include <iostream>

class Weapon{
	private:
		std::string _type;
	public:
		Weapon();
		Weapon(std::string name);
		~Weapon();
		const std::string getType();
		void setType(std::string name);
};


#endif //PISCINE_CP_WEAPON_H
