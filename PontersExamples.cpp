#include <iostream>

using  namespace std;

int main(){
	/*
	int x =42; // Declare and initalize an integere variable
	cout << &x; // Print the address of the variable x
	return 0;
	*/
	
	int x = 40;
	int *p;
	p = &x;
	
	cout << p <<" " << &x <<" " << *p <<" "<< x << endl;
	return 0;
}


