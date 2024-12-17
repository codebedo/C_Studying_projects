#include <iostream>

using namespace std;

int main()
{
	int baslangic, bitis, i;
	
	cout << "Lutfen iki sayi giriniz: " ;
	cin >> baslangic ;
	cout << "Lutfen iki sayi giriniz: " ;

	cin >> bitis ;
	
	i = baslangic;
	while(i <= bitis)
	{
		
		if(i % 7 == 0){
			
			cout << i << " ";
		} 
		i++;
		
		
	}
	
	return 0;
	
	
	
	
}
