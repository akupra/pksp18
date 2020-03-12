#include <iostream>
#include <math.h>
using namespace std;

struct ListElement
{
	int value;
	ListElement* pointer;

	ListElement()
	{
		value = 0;
		pointer = NULL;
	}
};

inline void AddToList(ListElement*& first, int n)
{
	ListElement* l = first;
	ListElement* p = NULL;

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
			ListElement* el = new ListElement();
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
inline void DeleteFromList(ListElement*& first, int n)
{
	ListElement* l = first;
	ListElement* p = NULL;

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

inline void InputList(ListElement*& first)
{
	ListElement* p = first;

	int n = 10000000;

	int i = 0;
	while (i < n)
	{
		AddToList(first, 2);
		i++;
	}
}
inline void OutputList(ListElement* l)
{
	while (l != NULL)
	{
		cout << l->value;
		l = l->pointer;
		if (l != NULL)cout << ", ";
	}
	cout << endl;
}