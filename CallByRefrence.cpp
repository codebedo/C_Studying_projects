#include <iostream>

using namespace std;

// int& it takes it  as an adress and reference , not as a value.
void change(int& value){
	value = value  * 2 ;
	cout << "value: " << value  << endl;
	
}
/* The function passese   parameter itself. thi is CAll BY REfERENCE*/
int main() {
	
	int number = 5;
	change(number);
	cout << "Number: " << number << endl;
	
	return 0;
}
