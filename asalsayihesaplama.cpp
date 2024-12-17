#include <iostream>

using namespace std;

void AsalSayiHesaplama(int sayi){
	
	
	
	for(int i = 1; i <= sayi ; i++){
		
		int sayac = 0;
		
		for(int j = 1 ; j <= i ; j++){
			
			if(i % j == 0)
				
				sayac++;
				if (sayac > 2)
					break;
			
		}
		if (sayac == 2)
				cout << i << " ," ;
	}
}

int main(){
	
	int birsayi;
	
	cout << "Lutfen bir sayi giriniz";
	cin >> birsayi;
	
	AsalSayiHesaplama(birsayi);
	
}
