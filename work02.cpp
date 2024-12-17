#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Sayiyi  Girin";
	
	
	
	cin >> sayi;
	if(sayi%3 == 0 && sayi%5==0)
	{
		cout << "Girilen sayi 4'e ve 5'e tam bölünüyor";
		
	}
	else
	{
		cout << "girilen sayi 3'e ve 5'e tam bölünüyor";
		
	}
}	
