#include <iostream>

using namespace std;


void ArrayTersYazdir(int arr[], int size){
	
	for(int i = size; i> 0; i--){
		
		cout << arr[i] << " ";
	}
	
	
}


int main(){
	
	cout << "Lutfen sayilari giriniz: ";
	
	
	int dizi[5];
	
	
	

	
	for(int i = 0; i < 5; i++){
		
		cout << i << "nci sayiyi giriniz: " ;
		
		cin >> dizi[i];
		
		
	}
	
	ArrayTersYazdir(dizi, 5);
}
