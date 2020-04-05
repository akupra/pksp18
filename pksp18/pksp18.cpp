#include <iostream>
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

	//Выводим все дерево на экран
	Output(root);
	cout << endl;

	//Ищем сумму элементов дерева
	int sum = Sum(root);
	cout << "Sum = " << sum << endl;

	//Ищем и удалаяем корень со значением 2. После этого снова выводим дерево на экран
	TreeElement* e = Find(root, 2); //ищем
	Detach(root, e); //отсоединяем поддерево от дерева
	Remove(e); //удаляем поддерево
	Output(root);

	//Ищем сумму элементов полученного дерева
	sum = Sum(root);
	cout << "Sum = " << sum << endl;

	//Снова ищем и удалаяем корень со значением 2. После этого снова выводим дерево на экран
	//На сей раз ничего в дереве не найдется и дерево не изменится
	TreeElement* e1 = Find(root, 2); //снова ищем двойку, которой уже нет!
	Detach(root, e1); //отсоединяем поддерево от дерева
	Remove(e1); //удаляем поддерево
	Output(root);

	//Ищем сумму элементов полученного дерева
	sum = Sum(root);
	cout << "Sum = " << sum << endl;

    system("pause");
}