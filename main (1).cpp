#include <iostream>
using namespace std; 

int main()
{
    int Luas, panjang, lebar;
    cout << "=============================================\n";
    cout << "Menghitung Luas Persegi Panjang Dengan Cepat\n";
    cout << "=============================================\n";
    
    cout << "Masukkan panjang (cm) = ";
    cin >> panjang;
    cout << "Masukkan lebar (cm) = ";
    cin >> lebar;
    
    Luas = panjang*lebar;
    cout << "Luas persegi panjang adalah " <<Luas<<endl;

    return 0;
}

