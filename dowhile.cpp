#include <iostream>

using namespace std;

int main()
{
	
	int sifre = 1234;
	int input;
	do{
		
		cout << "Lutfen sifre giriniz";
		
		cin >> input;
	}while(input != sifre);
	
	cout << "Skynete hoþgelidiniz: ";
	
	return 0;
}
