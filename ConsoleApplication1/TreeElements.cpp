#include <iostream>
using namespace std;

struct TreeElement
{
    int value;
    TreeElement* right;
    TreeElement* left;

    TreeElement()
    {
        value = -1;
        right = NULL;
        left = NULL;
    }
};

void Input(TreeElement*& el, int v)
{
    if (el == NULL)
    {
        el = new TreeElement();
        el->value = v;
    }
    else if (el->value > v)
    {
        Input(el->left, v);
    }
    else if (el->value < v)
    {
        Input(el->right, v);
    }
}
void Output(TreeElement* el)
{
    if (el != NULL)
    {
        //cout << "(";
        Output(el->left);
        cout << el->value << " ";
        Output(el->right);
        //cout << ")";
    }
    /*else
    {
        cout << ".";
    }*/
}