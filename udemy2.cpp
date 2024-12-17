#include <iostream>

using namespace std;

int main(){
	
	string isim;
	
	int en , boy , alan;
	
	cout << "Please enter your name: ";
	cin >> isim;
	cout << "Merhaba" << isim << "Geometrik hesaplama programýna katýlýn lutfen : \n\n";
	cout << " Lutfen dikdortgenin enini giriniz: ";
	cin >> en;
	cout << "Lutfen dikdortgenin boyunu giriniz: ";
	cin >> boy;
	
	alan = en * boy;
	
	cout << "Dikdortgenin alani"<< alan;
	
	return 0;
}
