#pragma once
#include <string>
#include "Occupation.h"
#include "Simpleton.h"

class Person : public Simpleton
{
public:
	Person(std::string);
	std::string get_name() const override;
	std::string get_occupation() const;
	void set_occupation(Occupation);
	bool operator||(Person const&) const;
private:
	std::string name;
	Occupation occupation_;
	bool isCool_;
};

