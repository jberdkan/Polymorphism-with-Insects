#pragma once
#include <iostream>
#include <string>

class Insect
{
public:
	//the first constructor
	Insect()
	{
		size = 0;
		std::cout << "Invoking the default Insect constructor" << std::endl;
	}
	//the 2nd argument constructor
	Insect(std::string c = "", double s = 0)
	{
		color = c;
		size = s;
		std::cout << "Invoking the 2-argument Insect constructor." << std::endl;
	}
	//virtual destructor
	virtual ~Insect()
	{
		std::cout << "Invoking the default Insect constructor" << std::endl;
	}

	//pure virtual function
	virtual void Eat() = 0;
	//getters 
	std::string getColor()
	{
		return color;
	}
	double getSize()
	{
		return size;
	}
	//setters
	void setColor(std::string c)
	{
		color = c;
	}
	void setSize(double s)
	{
		size = s;
	}
//private members
private:
	std::string color;
	double size;
};