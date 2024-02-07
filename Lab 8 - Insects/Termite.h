#pragma once
#include "Insect.h"
//create a Termite class inherited from the insect class
class Termite : public Insect {
public:
	//termite constructor
	Termite(std::string color, double size) : Insect(color, size)
	{
		std::cout << "Invoking the 2-argument Termite constructor." << std::endl;

	}
	//termite desctructor
	~Termite()
	{
		std::cout << "Invoking the Termite destructor." << std::endl;
	}
	//implementation of what the termite eats
	void Eat()
	{
		std::cout << "\nAs a termite, I eat wood." << std::endl << "My color is " << getColor() << ", and I am " << getSize() << " millimeters long." << std::endl;
	}
	//no private data members
private:

};
