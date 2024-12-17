#include <iostream>


using namespace std;


int f(int x){
	int sonuc;
	
	sonuc = 3 * x +2;
	return sonuc;
}

int main(){
	
	int hesaplama ;
	
	hesaplama = f(1);
	
	cout << "sonuc: " << hesaplama;
	
	return 0;
}
