#include <iostream>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Turkish");
	
	int sayi;
	cout<<"sayiyi girin: ";
	cin>>sayi;
	if(sayi%2==0)
	{
	
		cout<<"Girilen sayi çift";
	}
	else{
		cout << "Giriken sayi tek";
		
	}
	
}
