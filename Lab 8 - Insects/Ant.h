#pragma once
#include "Insect.h"
//create an Ant inherited from the insect class
class Ant : public Insect {
public:
	//ant constructor
	Ant(std::string color, double size): Insect(color,size)
	{
		std::cout << "Invoking the 2-argument Ant constructor." << std::endl;

	}
	//ant destructor
	~Ant()
	{
		std::cout << "Invoking the Ant destructor." << std::endl;
	}
	//implementation of what the ant eats
	void Eat()
	{
		std::cout << "\nAs an ant, I eat everything." << std::endl << "My color is " << getColor() << ", and I am " << getSize() << " millimeters long." << std::endl;
	}
	//no private data members
private:

};