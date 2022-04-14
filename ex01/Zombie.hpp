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
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void Announce(void);
		void SetName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
