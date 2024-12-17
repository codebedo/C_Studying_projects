#include <iostream>

using namespace std;


void printMin(int arr[5]);


int main(){
	
	int ar[5] = {320, 10, 20,50,40};
	printMin(ar);
	return 0;
}


void printMin(int arr[5])
{
	int min = arr[0];
	for(int i = 0; i < 5; i++){
		if(min > arr[i]){
			if(min > arr[i])
			{
				min = arr[i];
			}
		}
		cout << "Minimum element is: " << min << "\n";
	}
}
