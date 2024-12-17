#include <iostream>


using namespace std;


void BubbleSort(int arr[], int size){
	
	
	for(int i = size ; i >= 0 ; i--){
				
		cout << arr[i] << " ";
	}
	
	
	
	
}


int main(){
	
	cout << "sayilari giriniz: " ;
	int dizi[4];
	
	for(int i = 0; i < 4; i++){
		
		cout << i << "nci sayiyi giriniz: ";
		cin >> dizi[i];
	}
	
	BubbleSort(dizi, 3);
}
