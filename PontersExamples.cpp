#include <iostream>

using  namespace std;

int main(){
	// Example 01
	/*
	int x =42; // Declare and initalize an integere variable
	cout << &x; // Print the address of the variable x
	return 0;
	*/
	// example 2
	/*
	int x = 40;
	int *p;
	p = &x;
	
	cout << p <<" " << &x <<" " << *p <<" "<< x << endl;
	return 0;*/
	
	
	// EXAMPLE 3
	/*
	int x = 40; // Declare and initalize an integer variable
	int *p = &x; // Declare and initalize a pointer to the address of 'x'
	
	cout << p << endl; // Print the address stored in the pointer
	cout << *p << endl; // Print the value stored at the address in the pointer
	*/
	
	int *ptr  = nullptr; // ptr is now a null pointer
	
	if (ptr != nullptr){
		
		*ptr = 10;
	}
	
	
	cout << ptr << endl;
	return 0;
}


