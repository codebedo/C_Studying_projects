#include <iostream>

using namespace std;

int main(){
	
	int toplam = 0;
	int sayi ;
	
	setlocale(LC_ALL,"Turkish");
	for(int i = 1; i <= 10; i++){
		cout << i << ". sayiyi girin :" ;
		cin >>sayi;
		toplam = toplam + sayi;
	}
	
	cout << "Girilen 10 sayinin toplami: " << toplam/10;
}
