#include <iostream>
using namespace std;

int main(){
	
	int arr[] = {8,  12, 20};
	
	int *p;
	p = arr;
	
	// pointer calculate
	
	
	cout << "Array's first number: " << *p << endl;
	cout << "Array's second number: " << *(p + 1) << endl;
	cout << "Array's third number: " << *(p + 2) << endl;
	cout << "Array's first number address: " << p << endl;
	cout << "Array's second number address: " << p + 1 << endl;
	cout << "Array's third number address: " << p + 2<< endl;

	// we can change the value of array like this...
	// for example third number : 20, *(p+2) = 20 we can change to 22 , 
	*(p+2) = 22;
	cout << "Thats changing :" << *(p+2) << endl;
	cout << arr[2]<< endl;
	// now let's do the math to double it
	*(p +2) = *(p +2) * 2;
	cout << "arr[2] : " << arr[2] << endl;
	
	//Addresses- advanced additional information- 
	//there is a 4 byte dfferece between each memory addres in the array sequentianel numbered.
	
	cout << "Look at the last number for addresses: " << endl;
	cout << p << endl;
	cout << (p + 1) << endl;
	cout << (p + 2) << endl;
	
	
	// if it was double there wpold be a differece of 8 bytes
	/*	
	double arr[] = {8,  12, 20};
	
	double *p;
	p = arr;
	
	// pointer calculate
	
	
	cout << "Array's first number: " << *p << endl;
	cout << "Array's second number: " << *(p + 1) << endl;
	cout << "Array's third number: " << *(p + 2) << endl;
	cout << "Array's first number address: " << p << endl;
	cout << "Array's second number address: " << p + 1 << endl;
	cout << "Array's third number address: " << p + 2<< endl;

	// we can change the value of array like this...
	// for example third number : 20, *(p+2) = 20 we can change to 22 , 
	*(p+2) = 22;
	cout << "Thats changing :" << *(p+2) << endl;
	cout << arr[2]<< endl;
	// now let's do the math to double it
	*(p +2) = *(p +2) * 2;
	cout << "arr[2] : " << arr[2] << endl;
	
	//Addresses- advanced additional information- 
	//there is a 4 byte dfferece between each memory addres in the array sequentianel numbered.
	
	cout << "Look at the last number for addresses: " << endl;
	cout << p << endl;
	cout << (p + 1) << endl;
	cout << (p + 2) << endl;
	*/		
		
	
	
	
	return 0;
}
