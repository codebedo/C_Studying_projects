#include <iostream>

using namespace std;

int* findMax(int &a, int &b, int &c){
	
	return (a > b) ? (a > c) &a : &b;
}


int main() {
	
	int x = 5 ,  y = 10, z = 4;
	
	int *max = findMax(x, y);
	
	cout << *max;
	
	return 0;
}
