#include <iomanip>
#include <random>
//include all the classes that are created
#include "Ant.h"
#include "Beetle.h"
#include "Grasshopper.h"
#include "Termite.h"

using namespace std;
int main()
{
	//use the int to be able to know what the user wants to enter for his choice
	int option;
	// Insect class pointer
	Insect* insects[5];
	double size;
	string color;

	//used according to section 13-6 in book
	//seed used for generating random size
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<>ant_size(0.01, 1.0);
	uniform_real_distribution<>grasshopper_size(10.5, 50.0);
	uniform_real_distribution<>beetle_size(40.0, 75.5);
	uniform_real_distribution<>termite_size(1.5, 5.5);
	cout << fixed << setprecision(2);

	//prompt the user to choose type of insect
	cout << "Main Menu" << endl;
	cout << "1 - Ant" << endl;
	cout << "2 - Grasshopper" << endl;
	cout << "3 - Beetle" << endl;
	cout << "4 - Termite" << endl;

	// create a for loop to be able to choose 5 insects
	for (int i =0; i < 5;i++)
	{
		cout << "\nEnter selection: ";
		cin >> option;
		cout << "Enter the color associated with the insect you selected: ";
		cin >> color;
		//create a switch statement to loop over the selection of the insect
		switch (option)
		{
		case 1:
			size = ant_size(gen);
			insects[i] = new Ant(color, size);
			break;

		case 2:
			size = grasshopper_size(gen);
			insects[i] = new Grasshopper(color, size);
			break;

		case 3:
			size = beetle_size(gen);
			insects[i] = new Beetle(color, size);
			break;

		case 4:
			size = termite_size(gen);
			insects[i] = new Termite(color, size);
			break;
		default:
			cout << "Invalid Insect" << endl;
		};
	}
	//after creating the switch and for loop let the pointer point to the derived class that is chosen
	
	for (Insect* i : insects)
	{
		i->Eat();
	}
	//delete the memory allocation

	for (Insect* &i : insects)
	{
		delete i;
		i = NULL;
	}

	return 0;

}

