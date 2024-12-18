#include <iostream>



using namespace std;
// WHY DO WE USE POÝNTERS? LET SEE EXAMPLE

// we try de long way for the problem
int CalculatePlaneRotation(int x_) {
	// Suppose there is too much mathematical operation
	x_ = 34;
	return x_;
}

// and this is the faster way with pointer
void CalculatePlaneRotation(int *p){
	*p = 34;
}

// vxworks integrity : real time OS C/C++

int main(){

	int x = 30;
	cout << "Last Rotation on x axis : " << x << endl;
	//x = CalculatePlaneRotation(x);
	int *p;
	p = &x;
	CalculatePlaneRotation(p);
	cout << "New Rotation on x axis : " << x << endl;
	
	
	
	return 0;
	/* Just an example for practicing

	int x = 10;
	
	int *ptr;
	
	ptr = &x;
	
	cout << *ptr << endl;// holds the value of the variable
	cout << "x ' memory adress: "<< &x<< endl;
	cout <<"ptr holds the x memory address: " << ptr << endl; //ptr holds the memory address of the variable 
	
	
	return 0;
	*/
}
