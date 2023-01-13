#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
	for (a=1;a<=5;a++)
	{
		c=a;
		d=4;
		for (b=1;b<=a;b++)
		{
			cout<<c<<" ";
			c=c+d;
			d--;
		}
		cout<<endl;
	}
	return 0;
}
