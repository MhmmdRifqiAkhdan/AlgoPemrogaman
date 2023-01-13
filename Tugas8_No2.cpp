#include<iostream>
#include<iomanip>

using namespace std;

void baris();
void baris(){
    for(int i=1; i<=60; i++){
        cout<<"=";
    }
}

int main(){
    cout<<"\t\t\tDaftar Harga BBM"<<endl;
    baris();
    cout<<endl<<setiosflags(ios::left);
    cout<<setw(10)<<"Liter";
    cout<<setw(11)<<"Premium";
    cout<<setw(15)<<"Pertamax92";
    cout<<setw(14)<<"PrimaDex";
    cout<<setw(14)<<"Bio Solar"<<endl;
    baris();

    cout<<endl<<setiosflags(ios::left);
    cout<<setw(10)<<"1";
    cout<<setw(11)<<"Rp.7.650";
    cout<<setw(15)<<"Rp.9.850";
    cout<<setw(14)<<"Rp.7.500";
    cout<<setw(11)<<"Rp.5.000"<<endl;
    baris();
}
