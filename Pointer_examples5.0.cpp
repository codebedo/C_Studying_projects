#include <iostream>

using namespace std;

int main() {
	int var = 5;
	
	
	// store address of var
	int* point_var = &var;
	
	// Print value of var
	cout << "var = " << var << endl;
	
	
	// print address of var
	cout << "Address of var (&var)" << &var << endl
		 <<endl;
		 
	// print pointer point_var
	
	cout << "Point_var = " << point_var << endl;
	
	
	// print  the content of the address point_var points to
	
	cout << "Content of the address pointed to by point_var(*point_vat) = " << *point_var << endl;  
	return 0;
}
