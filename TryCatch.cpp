#include <iostream>


using namespace std;


int main(){
	int divided, divisor;
	
	cout << "Please enter the number you are dividing by : ";
	cin >> divided;
	cout << "Please eneter the divisor: ";
	cin >> divisor;
	
	int result;
	try {
		if( divisor == 0)
			throw 99;
		 result = divided / divisor;
		 int result = divided / divisor;
	} 
	catch (int ErrorCode){
		
		cout << "Divisor number should not  be 0 !" << endl;
	}
	
	
	
	cout << endl;
	return 0;
}
