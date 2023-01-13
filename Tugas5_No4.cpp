#include <iostream>
using namespace std;
#define MAX 100
int TOP;
struct stack
{
    int data[MAX];
};
stack X;
void CreateStuck()
{
    TOP = -1;
}
void ClearStuck()
{
    TOP = -1;
}
int Full()
{
    if (TOP == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Emnty()
{
    if (TOP == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Push(int input)
{
    if (!Full())
    {
        TOP++;
        X.data[TOP] = input;
    }
    else
    {
        cout << "Stack X sudah penuh" << endl;
    }
}
void Pop()
{
    if (!Emnty())
    {
        TOP--;
    }
    else
    {
        cout << "Data Masih Kosong" << endl;
    }
}
void Print()
{
    if (!Emnty())
    {
        cout << "\nData pada STACK adalah : " << endl;
        for (int i = 0; i <= TOP; i++)
        {
            cout << X.data[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "\nData pada STACK Kosong" << endl;
    }
}
main()
{
    CreateStuck();
    Push(17);
    Print();
    Push(25);
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Push(22);
    Print();
    ClearStuck();
    Print();
    Push(166);
    Print();
    Push(78);
    Print();
    Pop();
    Print();
    return 0;
}
