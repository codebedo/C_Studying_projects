#include <iostream>

using namespace std;

int main(){
	
	int toplam = 0 ;
	int sayi ; 
	
	setlocale(LC_ALL, "Turkish");
	for(int i = 1; i<=5; i++)
	{
		cout << i << "Sayiyi girin: ";
		
		cin >> sayi;
		toplam = toplam + sayi;
		
	}
	cout << "Girilen 5 sayinin toplami : " << toplam;
}
