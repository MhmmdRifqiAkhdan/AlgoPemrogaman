#include<iostream>
using namespace std;

int main()
{
    char x;
    cout<<"Pilih Huruf a-z"<<endl;
    cout<<"*Menggunakan huruf kecil"<<endl;
    cout<<"Masukan Huruf : ";
    cin>>x;

    if (x=='a'||x=='i'||x=='u'||x=='e'||x=='o')
    {
        cout<<x<<" Termasuk Huruf Vokal"<<endl;
    }
    else
    {
        cout<<x<<" Termasuk Huruf Konsonan"<<endl;
    }
    return 0;
}
