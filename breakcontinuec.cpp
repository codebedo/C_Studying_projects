#include <iostream>

using namespace std;


int main(){
	
	int sayi, sonuc;
	
	
	cout << "Lutfen faktoriyelini istediginiz sayiyi giriniz: ";
	cin>> sayi;
	sonuc = 1;
	for (int i = 1; i <= sayi; i++){
		sonuc = sonuc * i;
	}
	
	cout <<sayi << "in faktoriyeli "<< sonuc << endl;
	
	
	return 0;
}
