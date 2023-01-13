#include<iostream>
using namespace std;

int main(){
    int umur;
    cout<<"Masukan Umur : ";
    cin>>umur;

    //kondisi
    if (umur <=1){
        cout<<umur<<" tahun, Termasuk Kategori bayi"<<endl;
    }else if (umur >1 && umur <=3){
        cout<<umur<<" tahun, Termasuk Kategori batita"<<endl;
    }else if (umur >3 && umur <=5){
        cout<<umur<<" tahun, Termasuk Kategori balita"<<endl;
    }else if (umur >5 && umur <= 12){
        cout<<umur<<" tahun, Termasuk Kategori anak-anak"<<endl;
    }else if (umur >12 && umur <=17){
        cout<<umur<<" tahun, Termasuk Kategori remaja"<<endl;
    }else if (umur >17 && umur <=30){
        cout<<umur<<" tahun, Termasuk Kategori pemuda"<<endl;
    }else if (umur >30 && umur <=60){
        cout<<umur<<" tahun, Termasuk Kategori dewasa"<<endl;
    }else {
        cout<<umur<<" tahun, Termasuk Kategori lansi"<<endl;
    }
}

