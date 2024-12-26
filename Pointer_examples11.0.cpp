#include <iostream>

using namespace std;


//function definiton to swap values
// using const refrences


void swap(const int& n1, const int& n2){
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	
}

int main() {
	
	// initialize variables
	
	int a = 1, b =2;
	
	
	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	// call function to swap numbers 
	swap(a, b);
	
	cout << "\n after swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	return 0;
}
