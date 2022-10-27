#include "Person.h"

#include <iostream>
#include <utility>

Person::Person(std::string name2)
{
	name = name2;
	if(name[0] == 'H'){
		isCool_ = true;
		std::cout << "Hejsan";
		}
}

std::string Person::get_name() const
{
	return name;
}

std::string Person::get_occupation() const
{
	switch (occupation_)
	{
		case Occupation::ElephantMasseuse:
			return "ElephantMasseuse";
		default: 
			return "Unemployed";
	}
	
}

void Person::set_occupation(Occupation occupation)
{	
	occupation_ = occupation;
}

bool Person::operator||(Person const& p) const
{
	return isCool_ || p.isCool_;
}



