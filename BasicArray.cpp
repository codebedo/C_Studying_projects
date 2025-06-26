#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 4;
    double sinavNotlari[SIZE];
    double sinavAgirlik[SIZE] = {0.15, 015, 0.30, 0.40};
    
    double AgirlikliToplam = 0;
    
    
    for (int i = 0 ; i < SIZE ; i++){
        cout <<i +1 << "Sinav notunu girin: ";
        cin >> sinavNotlari[i];
        AgirlikliToplam = AgirlikliToplam + sinavNotlari[i] * sinavAgirlik[i];
    }
    
    cout << "sinav notlarinin ortalamasi: " << AgirlikliToplam << endl;
}
