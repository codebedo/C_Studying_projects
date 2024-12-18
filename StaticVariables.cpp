/*When a variable is declared as static, 
	it is allocated for the lifetime of the program. 
	Even if the function is called multiple times, 
	the static variable space is allocated only once and 
	the value of the variable from the previous call is carried over to the next function call.*/
	
#include <iostream>


using namespace std;



void function1(){
	static int counter  = 0;
	static double x = 0;
	counter++;
	x = x + 1.1;
	cout <<"Function value: " << counter <<  "  " << x << endl;
}
void function2(){
	static int counter  = 0;
	static double x = 0;
	counter++;
	x = x + 1.1;
	cout <<"Function value: " << counter <<  "  " << x << endl;
}
int main(){
	
	
	function1();
	function1();
	function2();
	function2();

	return 0;
}
	
