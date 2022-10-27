#include "Person.h"

Person::Person(std::string name) : name(name)
{
	occupation_ = Occupation::Coder;
}

std::string Person::get_name() const
{
	return name;
}


