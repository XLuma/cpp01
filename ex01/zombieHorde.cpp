//
// Created by Louis-gabriel Laplante on 2022-04-12.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieArray = new Zombie[N];
	int i = 0;

	while (i < N)
	{
		zombieArray[i].SetName(name);
		i++;
	}
	i = 0;
	return (zombieArray);
}