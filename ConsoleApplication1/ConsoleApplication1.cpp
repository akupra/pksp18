#include <iostream>
#include <math.h>
using namespace std;

struct element
{
	int value;
	element* pointer;

	element()
	{
		value = 0;
		pointer = NULL;
	}
};

void AddToList(element*& first, int n)
{
	element* l = first;
	element* p = NULL;

	while (true)
	{
		bool b = false;
		if (l != NULL)
		{
			b = l->value < n;
		}
		
		if (b)
		{
			p = l;
			l = l->pointer;
		}
		else
		{
			element* el = new element();
			el->value = n;

			el->pointer = l;
			if (p != NULL)
			{
				p->pointer = el;
			}
			else
			{
				first = el;
			}
			break;
		}
	}
}
void DeleteFromList(element*& first, int n)
{
	element* l = first;
	element* p = NULL;

	while (l != NULL)
	{
		if (l->value != n)
		{
			p = l;
			l = l->pointer;
		}
		else
		{
			p->pointer = l->pointer;
			delete l;
			l = p->pointer;
		}
	}

}

void InputList(element* &first)
{
	element* p = first;

	int n = 10000000;

	int i = 0;
	while (i < n)
	{
		AddToList(first, 2);
		i++;
	}
}
void OutputList(element* l)
{
	while (l != NULL)
	{
		cout << l->value;
		l = l->pointer;
		if (l != NULL)cout << ", ";
	}
	cout << endl;
}

int main()
{
	element* first = NULL;

	InputList(first);
	AddToList(first, -3);
	DeleteFromList(first, 2);
	OutputList(first);
	
	system("pause");
}