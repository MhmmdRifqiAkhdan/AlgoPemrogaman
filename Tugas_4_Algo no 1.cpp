#include <iostream>
#include <conio.h>

using namespace std;
int main (){
int a,b,i;
a=1;
cout << "Bilangan Ganjil 1 Sampai 15:" << endl;
for (i=1 ; i<9 ; i++)
{
b=2+a;
cout<<a<<" ";
a=b;
}
getch ();
}
