#include <iostream>

using namespace std;

int main()
{
	
	int sayi;
	cout << "Lutfen bir sayi girin";
	cin >> sayi;
	
	for(int j = 1; j <=sayi; j++){
		
		for(int i = 1; i <= j ; i++){
			
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
