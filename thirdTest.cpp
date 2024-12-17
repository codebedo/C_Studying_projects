#include <iostream>

using namespace std;

class Kisi{
	public:
	
	string adi;
	string soyadi;
		
};

	
int main(){
	
	Kisi k1;
	
	k1.adi= "Bedirhan";
	k1.soyadi = "Aydin";
	
	cout<< "k1 adi: " << k1.adi << endl;
	cout<< "k1 soyadi: " << k1.soyadi << endl;
	return 0;
	
}
