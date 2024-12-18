// Last pointer example for anything and practicing


#include <iostream>

using namespace std;

int main() {
	
	
	int x = 7;
	cout << x << " "<< &x << endl;
	int* p = &x; //*p gets the address of x
	cout << *p <<" "<< p<< endl;
	int y = *p + 8; // *p already had the address of x and there was 7 there , now we added 8
	cout << y  << " " << &y <<endl;
	int* z = &y; //Now give the addresss of yto the pointer z
	cout << *z <<" " <<  z << endl;
	int w = *z + 5;
	cout << w << endl;
	
	return 0;
}
