#include <iostream>
using namespace std;
 
int main() {
    float phi = 3.14;
    float r, L;
 
    cout << "Menghitung luas lingkaran\n";
    cout << "==============================\n";
    cout << "Masukan jari-jari lingkaran: ";
    cin >> r;
    L = phi * r * r;
    cout << "Luasnya lingkaran dengan jari-jari " << r << " adalah " << L ;
 
    return 0;
}
