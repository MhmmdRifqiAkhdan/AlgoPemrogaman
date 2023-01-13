#include<iostream>
using namespace std;

int main(){
	string nama;
	int tanggal, bulan;
	
	cout<<"Masukkan Nama Anda : ";
	cin>>nama;
	cout<<"Masukkan Tanggal Lahir Anda : ";
	cin>>tanggal;
	cout<<"Masukkan Bulan Lahir Anda : ";
	cin>>bulan;
	cout<<"==============================="<<endl;
	
	if (bulan == 1){
		if ((tanggal >= 1)&&(tanggal < 19)){
			cout<<"Zodiak anda adalah Capricorn"<<endl;
		} else if ((tanggal >= 19)&&(tanggal <= 31)){
			cout<<"Zodiak anda adalah Aquarius"<<endl;
		}
	}
	
	if (bulan == 2){
		if ((tanggal >= 1)&&(tanggal < 18)){
			cout<<"Zodiak anda adalah Aquarius"<<endl;
		} else if ((tanggal >= 18)&&(tanggal <= 29)){
			cout<<"Zodiak anda adalah Pisces"<<endl;
		}
	}
	
	if (bulan == 3){
		if ((tanggal >= 1)&&(tanggal < 20)){
			cout<<"Zodiak anda adalah Pisces"<<endl;
		} else if ((tanggal >= 20)&&(tanggal <= 31)){
			cout<<"Zodiak anda adalah Aries"<<endl;
		}
	}
	
	if (bulan == 4){
		if ((tanggal >= 1)&&(tanggal < 20)){
			cout<<"Zodiak anda adalah Aries"<<endl;
		} else if ((tanggal >= 20)&&(tanggal <= 30)){
			cout<<"Zodiak anda adalah Taurus"<<endl;
		}
	}
	
	if (bulan == 5){
		if ((tanggal >= 1)&&(tanggal < 20)){
			cout<<"Zodiak anda adalah Taurus"<<endl;
		} else if ((tanggal >= 20)&&(tanggal <= 31)){
			cout<<"Zodiak anda adalah Gemini"<<endl;
		}
	}
	
	if (bulan == 6){
		if ((tanggal >= 1)&&(tanggal < 20)){
			cout<<"Zodiak anda adalah Gemini"<<endl;
		} else if ((tanggal >= 20)&&(tanggal <= 30)){
			cout<<"Zodiak anda adalah Cancer"<<endl;
		}
	}
	
	if (bulan == 7){
		if ((tanggal >= 1)&&(tanggal < 21)){
			cout<<"Zodiak anda adalah Cancer"<<endl;
		} else if ((tanggal >= 21)&&(tanggal <= 31)){
			cout<<"Zodiak anda adalah Leo"<<endl;
		}
	}
	
	if (bulan == 8){
		if ((tanggal >= 1)&&(tanggal < 20)){
			cout<<"Zodiak anda adalah Leo"<<endl;
		} else if ((tanggal >= 20)&&(tanggal <= 31)){
			cout<<"Zodiak anda adalah Virgo"<<endl;
		}
	}
	
	if (bulan == 9){
		if ((tanggal >= 1)&&(tanggal < 22)){
			cout<<"Zodiak anda adalah Virgo"<<endl;
		} else if ((tanggal >= 22)&&(tanggal <= 30)){
			cout<<"Zodiak anda adalah Libra"<<endl;
		}
	}
	
	if (bulan == 10){
		if ((tanggal >= 1)&&(tanggal < 22)){
			cout<<"Zodiak anda adalah Libra"<<endl;
		} else if ((tanggal >= 22)&&(tanggal <= 31)){
			cout<<"Zodiak anda adalah Scorpio"<<endl;
		}
	}
	
	if (bulan == 11){
		if ((tanggal >= 1)&&(tanggal < 22)){
			cout<<"Zodiak anda adalah Scorpio"<<endl;
		} else if ((tanggal >= 22)&&(tanggal <= 30)){
			cout<<"Zodiak anda adalah Sagitarius"<<endl;
		}
	}
	
	if (bulan == 12){
		if ((tanggal >= 1)&&(tanggal < 20)){
			cout<<"Zodiak anda adalah Sagitarius"<<endl;
		} else if ((tanggal >= 20)&&(tanggal <= 31)){
			cout<<"Zodiak anda adalah Capricorn"<<endl;
		}
	}
}
