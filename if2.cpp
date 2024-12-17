#include <iostream>

using namespace std;


int main(){
	
	int sayi1 , sayi2;
	cout << "1.sayiyi giriniz: ";
	cin >> sayi1 ;
	cout << "2.sayiyi giriniz: ";
	cin >> sayi2;
	
	if(sayi1 > 0 && sayi2 > 0)
	{
		cout << "Her iki sayiniz da pozitif\n";
	}
	else if( sayi1 < 0 && sayi2 < 0)
	{
		cout << "Her iki sayida negatif \n";	
	} 
	else if ( sayi1 < 0 || sayi2 < 0)
	{
		cout << "Sayilarinizdan biri negatif:";
	}
	
	
}
