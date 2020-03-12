#include <iostream>
#include <math.h>
#include "ListElements.cpp"
using namespace std;


int main()
{
	ListElement* first = NULL;

	InputList(first);
	AddToList(first, -32);
	DeleteFromList(first, 2);
	OutputList(first);
	
	system("pause");
}