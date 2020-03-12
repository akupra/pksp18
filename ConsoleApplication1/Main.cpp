#include <iostream>
#include <math.h>
#include "ListElements.cpp"
#include "TreeElements.cpp"
using namespace std;


int main()
{
    /*Работа со списком*/
	ListElement* first = NULL;

	InputList(first);
	AddToList(first, -32);
	DeleteFromList(first, 2);
	OutputList(first);

    /*Работа с деревом*/
    TreeElement* root = NULL;
    Input(root, 5);
    Input(root, 1);
    Input(root, 2);
    Input(root, 8);
    Input(root, 4);
    Input(root, 6);
    Input(root, 3);
    Input(root, 9);
    Input(root, 7);

    Output(root);
    cout << endl;
	
	system("pause");
}