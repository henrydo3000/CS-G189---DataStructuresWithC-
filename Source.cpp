#include <iostream>
#include "Header.h"
using namespace std;

int add(int a, int b);
int add(int a, int b)
{
	return a + b;
}
void ZeroThis(int* a);
void ZeroThis(int* a)						// the first use of the asterisk is to declare a pointer
{			
	(*a) = 0;								// the second use of the asterisk is to dereference 	
}											// Dereferencing is used to access or manipulate data contained in memory location pointed to by a pointer.
class Node
{
public:
	int Size = 0;
};
class Grower
{
public:
	void Up(Node* A)
	{
		*A.Up();
	} // *A.Up()
};


int main()
{
	int x = add(1, 2); //3
	int y = add(2, 2); //4
	int z = add(3, 2); //5

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	ZeroThis(&x);
	cout << x << endl;
	ZeroThis(&y);
	cout << y << endl;
	ZeroThis(&z);
	cout << z << endl;

	Node aNode;
	aNode.Size = 100;
	cout << aNode.Size << endl;
	int Size = 1000;
	cout << aNode.Size << endl;

	Grower derp;
	Node bNode;
	derp.Up(&bNode);

	return 0;
}