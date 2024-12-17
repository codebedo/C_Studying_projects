#include <iostream>

using namespace std;

int hesapla( int x){
	
	int sonuc;
	
	sonuc = 3 * x + 2 ;
	
	return sonuc ;
	
}

int alanHesapla(int x , int y){
	
	int alan;
	
	alan = x * y / 2;	
	
}

void hicbirSeyYapma(string isim){
	cout << "Merhaba " << isim << endl;
}

string adSoyadBirlestir(){
	string ad, soyad, adSoyad;
	cout << "Lutfen isminizi giriniz: ";
	cin >> ad;
	cout << "Lutfen soyadinizi giriniz: ";
	cin >> soyad;
	//cout << "Merhaba " << ad  + soyad;
	adSoyad = ad + " " + soyad;
	
	return adSoyad;
}

void kareAlanHesaplaGoster(int kenar){
	
	cout << "Karenizin alani; " << (kenar * kenar) << endl;
}


int main(){
	
	
	cout << adSoyadBirlestir() << endl;
	/*
	cout<< "alan: " << alanHesapla(4 , 5) << "\n";
	
	cout << "Sonuc: " << hesapla(3) << endl;
	kareAlanHesaplaGoster(5);
	hicbirSeyYapma("Bedo");*/
	
	cout << "Hoscakalin...\n";
	
	return 0; 
}
