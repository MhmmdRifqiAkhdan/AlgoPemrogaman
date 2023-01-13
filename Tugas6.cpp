#include<iostream>
#include<iomanip>
using namespace std;

void garis();       //fungsi

int main(){

    garis();        //memanggil fungsi
    cout<<endl;

	cout<<setiosflags(ios::left);
    cout<<setw(15)<<"MATA KULIAH"<<"DOSEN"<<endl;

    garis();        //memanggil fungsi
    cout<<endl;

    cout<<setw(15)<<"PBO"<<"ANITA"<<endl;
    cout<<setw(15)<<"ALGORITMA"<<"YUNITA"<<endl;
}
void garis(){

    for(int i = 1; i<=25; i++){
        cout<<"=";
    }
}
