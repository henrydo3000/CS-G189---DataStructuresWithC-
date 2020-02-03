//Program Name:								Pointers and Memory
//Program Description:						This program will show how two different objects (objGrill and objPerson) can both do something to the same object (objHotdog)
//Programmer Name:							Henry Do
//Date:										February 2, 2020

#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;

Hotdog::Hotdog() 
{
	mCooked = false;
};									
bool Hotdog::getmCooked()
{
	return mCooked;
}
void Hotdog::setmCooked()
{
	mCooked = true;
}


Grill::Grill() {};
void Grill::CookHotdog(Hotdog* hotdog)				// Grill method that takes a Hotdog pointer, called hotdog, as an argument and sets a cooked flag in the hotdog to true (this means the hotdog class has an attribute, bool cooked)
{
	(*hotdog).setmCooked();					// This statement accesses the mSetCooked attribute within the object pointed to by the argument (this input should be a memory address and will contain &).
}


void Person::printmCooked(Hotdog *hotdog)
{
	cout << boolalpha << "Hotdog Cooked Status: " << (*hotdog).getmCooked() << endl;
}




int main()
{
	Hotdog objHotdog;
	Grill objGrill;
	Person objPerson;

	objPerson.printmCooked(&objHotdog);
	objGrill.CookHotdog(&objHotdog);
	objPerson.printmCooked(&objHotdog);

	return 0;
}