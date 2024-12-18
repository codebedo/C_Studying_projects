#include <iostream>

using namespace std;


void change(int value){
	value = value  * 2 ;
	cout << "value: " << value  << endl;
	
}
/* The function passese he value , bnot the parameter itself. thi is CAll BY VALUE*/
int main() {
	
	int number = 5;
	change(number);
	cout << "Number: " << number << endl;
	
	return 0;
}
