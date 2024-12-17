#include <iostream>

using namespace std;


void diziDegistir(int arr[], int size){
	for(int i = 0; i < size ; i++)
	{
		
		arr[i] = arr[i] + 1;
	}
}

void sayiyiDegistir(int sayi){
	
	sayi = sayi + 1;
}



int main(){
	
/*	int dizi[] = {3, 9 , 12, 5, 10, 1 ,3};
	
	
	diziDegistir(dizi, 7);
	
	
	for(int i = 0; i <7; i++){
		cout << dizi[i] << " ,";
	}*/
	
	int sayi = 10;
	sayiyiDegistir(sayi);
	
	cout << sayi;
	
	
	cout << endl;
	
	return 0;
}
