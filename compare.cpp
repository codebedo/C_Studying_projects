#include <iostream>

using namespace std;


	int main(){
	
		int sayi1 , sayi2 , sayi3;
		cout << "Lutfen birinci sayiyi giriniz: ";
		cin >> sayi1;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> sayi2;
		cout << "Lutfen ucuncu sayiyi girniz: ";
		cin >> sayi3;
		
		if( (sayi1 > sayi2) && (sayi1 > sayi3)){
			cout << "Enbuyuk sayi"<< sayi1;
		}else if((sayi2 > sayi1) && (sayi2 > sayi3)){
			cout << "Enbuyuk sayi: " <<sayi2;
		}
		else {
			
			cout << "Enbuyuk sayi: " <<sayi3;
		}
		
		return 0;
}
