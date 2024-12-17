#include <iostream>

using namespace std;

void PrintToScreenForError(){
	
	cout << "Warning : Unexpecting ussie" << endl;
	
}

void ekranaHataMesajiYaz(string message){
	cout << message << endl;
}
void ekranaHataMesajiYaz(int hatakodu){
	cout << "Hatali islem, hata kodu: " << hatakodu << endl;
}
int main(){
	
	//C++ Fonksiyonlar - C++ Metodlar
	PrintToScreenForError();
	ekranaHataMesajiYaz("Error in program!");
	ekranaHataMesajiYaz(345);	
	cout << "Good Morning my Neighboor";
}
