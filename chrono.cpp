#include <iostream>
#include <chrono>

using namespace std;


int main(){
	
	int sayi ;
	
	cout << "Lutfen sayi giriniz: ";
	cin >> sayi;
	
	
	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	
	for(int i = 1; i <= sayi; i++){
		
		int sayac = 0;
		
		for(int j = 1; j <= i; j++){
			
			if(i % j == 0)
				sayac ++;
			if(sayac > 2)
				break;
		}
		if(sayac == 2)
			cout << i << ", ";
	}
	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	
	std::cout << "Time difference = " << chrono::duration_cast<<std::chrono::microseconds>(end - begin).count() << ""
	
	
}


