#pragma once
#include "Insect.h"
//create a Grasshopper class inherited from the insect class
class Grasshopper : public Insect {
public:
	//grasshopper constructor
	Grasshopper(std::string color, double size) : Insect(color, size)
	{
		std::cout << "Invoking the 2-argument Grasshopper constructor." << std::endl;

	}
	//grasshopper destructor
	~Grasshopper()
	{
		std::cout << "Invoking the Grasshopper destructor." << std::endl;
	}
	//implementation of what the grasshopper eats
	void Eat()
	{
		std::cout << "\nAs a grasshopper, I eat grass and leaves." << std::endl << "My color is " << getColor() << ", and I am " << getSize() << " millimeters long." << std::endl;
	}
	//no private data members
private:

};
