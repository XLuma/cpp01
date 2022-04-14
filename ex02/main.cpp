//
// Created by Louis-gabriel Laplante on 2022-04-13.
//

#include <iostream>
int main()
{
	std::string str  = "HI THIS IS BRAIN"; //string def
	std::string *ptr = &str; //pointer to "ref" of str
	std::string &ref = str; //reference of str

	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	//addresses
	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << &ref << std::endl;
}