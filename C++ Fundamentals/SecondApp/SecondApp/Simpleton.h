#pragma once
#include "IPerson.h"

class Simpleton : public IPerson
{
public:
	std::string get_name() const override{ return "Mrs Jones"; }
};
