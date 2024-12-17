#include <iostream>

using namespace std;




int main(){
	
	int arr[2][3] = {{8, 17,25}, {12 , 40, 35} };
	
	
	//cout << arr[0][0] ;
	
	for(int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++ ){
			
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
