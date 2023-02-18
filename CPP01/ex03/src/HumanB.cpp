#include "gloabl_header.h"

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout << "HumanB " << name <<  " contructed" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}

std::string	HumanB::get_name(void)
{
	return (this->name);
}

Weapon	HumanB::get_weapon(void)
{
	return (this->weapon);
}
