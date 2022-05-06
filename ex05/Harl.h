//
// Created by XLuma on 2022-04-15.
//

#ifndef CPP01_HARL_H
#define CPP01_HARL_H

#include <iostream>
#include <string>
#include <unordered_map>

#define DEBUG "I love having extra bacon for my XXL-double-cheese-triple-pickle-special-burger. I really do!"
#define INFO "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger !"
#define WARNING "I think I deserve extra bacon for free."
#define ERROR "This is unnaceptable ! I want to speak to the manager now."

class Harl {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
		Harl();
		~Harl();
};

typedef void (Harl::*func)(void);
#endif //CPP01_HARL_H

