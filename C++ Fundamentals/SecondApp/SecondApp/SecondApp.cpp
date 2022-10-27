// SecondApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Person.h"
#include "Simpleton.h"

void PrintName(const IPerson& person)
{
	std::cout << person.get_name() << std::endl;
}

int main()
{
	Person coder("Herr Per Persson");
	Person Bella("Not too cool");
	std::shared_ptr<Person> Uhrdin = std::make_shared<Person>("Uhrdis");
	std::cout << Uhrdin->get_occupation() << std::endl;
  std::shared_ptr<Person> U2 = Uhrdin;
	U2->set_occupation(Occupation::ElephantMasseuse);
	std::cout << Uhrdin->get_occupation() << std::endl;
	const Simpleton simpy;
	coder.set_occupation(Occupation::ElephantMasseuse);
	std::cout << "Hej hopp" << std::endl;
	PrintName(coder);
	PrintName(simpy);
	//std::cout << coder.get_name() << std::endl;
	//std::cout << coder.get_occupation() << std::endl;
	//int bitty = 4 | 1;
	//bool cool = coder||Bella;
	//std::cout <<  cool;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
