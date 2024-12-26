#include <iostream>


using namespace std;


void swap(int& x, int& y);

int main (){
	
	int a = 5;
	int b = 9;
	
	cout << "This program exchanges 2 values using reference parameters." << endl;
	cout << "Values before the exchange:" << endl;
	cout << "a= " << a << "b= " << b << endl;
	
	swap(a,b); // code that calls the function
	
	cout << "Values after the excahnge" << endl;
	cout << "a= " << a << " b= " << b << endl;
	
	
	
	
}

// function for passing by reference
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	y = temp;
	return ;
	
}
