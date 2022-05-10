//
// Created by Louis-gabriel Laplante on 2022-04-12.
//
#include <iomanip>
#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void Announce(void);
};
void randomChump(std::string name);
Zombie *newZombie(std::string name);


#endif
