#include <iostream>

using namespace std;


int main(){
	
	
	int x = 7;
 	
	int *ptr; // A pointer is a structure that holds an address.
	ptr = &x; // &: address of : 's address &x = x parameter address
	
	cout << *ptr << endl;
	*ptr = 9;// we changed the contetn of the variable with the pointer without using it.
	cout << *ptr << endl;
	cout << "x : " << x << endl; 
	
	
	return 0;
	
}
