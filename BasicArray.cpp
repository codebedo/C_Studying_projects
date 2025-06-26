#include <iostream>
using namespace std;


int main()
{
    cont int SIZE = 3;
    double sinavNotlari[SIZE];
    
    double toplam = 0;
    
    
    for (int i = 0 ; i < SIZE ; i++){
        cout <<i +1 << "Sinav notunu girin: ";
        cin >> sinavNotlari[i];
        toplam = toplam + sinavNotlari[i];
    }
    cout << sinavNotlari[i];
}
