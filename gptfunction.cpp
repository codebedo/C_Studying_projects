#include <iostream>

using namespace std;

// Fonksiyon prototipi

int toplama(int x, int y);

int main(){
	int sayi1, sayi2, sonuc;
	
	
	//kullanicidan giris al
	cout << "Birinci sayiyi girin: ";
	cin >> sayi1;
	
	cout << "Ikinci sayiyi girin: ";
	cin >> sayi2;
	
	// Toplama islemi
	
	sonuc = toplama(sayi1, sayi2);
	
	//sonucu ekrana yazdýr
	cout << "Toplam: " << sonuc << endl;
	
	return 0;
}

// Toplama fonksiyonu

int toplama(int x, int y){
	return x + y;
}
