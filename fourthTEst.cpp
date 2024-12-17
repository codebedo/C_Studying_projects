#include <iostream>
// Bu kodlarda kurucu metot, yýkýcý metot, sýnýf sabiti, metot, pointer, eriþim belirleyici bulunmaktadýr...
using namespace std;

class Kisi {
	private: 
		string adi;
	protected:
		string soyadi;
	public:
		static int nesneSayisi;
		Kisi(string a, string s){
			cout << "Nesne oluþturluyor." <<endl;
			this->adi = a ;
			(*this).soyadi = s;
			Kisi::nesneSayisi++;
			
		}
		string yazdir() {
			return this ->adi + " " + this->soyadi;
			 
		}
		~Kisi() {
			cout << " Nesne siliniyor." <<endl;
		}
};

int Kisi::nesneSayisi = 0;

int main(){
	Kisi *p;
	Kisi k1("Bedirhan", "Aydin");
	Kisi k2("Ejder", "Aydin");
	
	p = &k2;
	
	cout <<k1.yazdir() << endl;
	cout <<p->yazdir() << endl;
	
	cout << "Kopya sayisi : " << Kisi::nesneSayisi << endl;
	
	return 0;
}
