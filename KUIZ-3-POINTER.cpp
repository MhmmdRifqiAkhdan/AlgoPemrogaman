#include <iostream>

using namespace std;

int main(){
  
     //deklarasi variabel angka dengan tipe data int
     int angka = 90;

     //deklarasi pointer angkax dengan tipe data int
     int *angkax;

     //angkax sama dengan Address Of angka (0x6ffe34)
     //sekarang pointer angkax menunjuk ke alamat memori variabel angka
     //atau pointer angkax berisi (menunjuk) alamat memori variabel angka
     angkax = &angka;

     cout<<"Nilai (isi) dari variabel angka : "<<angka;
     cout<<"\nAlamat variabel angka (&angka) : "<<&angka;
     cout<<"\nNilai yang ditunjuk pointer *angkax : "<<*angkax;

     return 0;
}

