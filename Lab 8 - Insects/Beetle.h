#pragma once
#include "Insect.h"
//create a Beetle class inherited from the insect class
class Beetle : public Insect {
public:
	//beetle constructor
	Beetle(std::string color, double size) : Insect(color, size)
	{
		std::cout << "Invoking the 2-argument Beetle constructor." << std::endl;

	}
	//Beetle destructor
	~Beetle()
	{
		std::cout << "Invoking the Beetle destructor." << std::endl;
	}
	//implementation of what the beetle eats
	void Eat()
	{
		std::cout << "\nAs a beetle, I eat plants and other small insects." << std::endl << "My color is " << getColor() << ", and I am " << getSize() << " millimeters long." << std::endl;
	}
	//no private data members
private:

};
