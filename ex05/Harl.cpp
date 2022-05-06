//
// Created by XLuma on 2022-04-15.
//

#include "Harl.h"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug( void )
{
	std::cout << DEBUG << std::endl;
}

void Harl::info ( void )
{
	std::cout << INFO << std::endl;
}

void Harl::warning ( void )
{
	std::cout << WARNING << std::endl;
}

void Harl::error ( void )
{
	std::cout << ERROR << std::endl;
}

void Harl::complain (std::string level)
{
	int i = 0;

	func funcs[4] = {
		&Harl::info,
		&Harl::warning,
		&Harl::debug,
		&Harl::error
	};

	std::string levels[4] = {
		"info",
		"warning",
		"debug",
		"error"
	};

	while (i < 4)
	{
		if (levels[i] == level)
		{
			((this)->*funcs[i])();
		}
		i++;
	}
}