#include <iostream>

using namespace std;


int main(){
    
    
    int arr[2][3] = {{2,25, 25},{12,15,16} };
    
    
    // first ercample
    //cout << arr[0][1];
    
    
    //second example 
    //cout << "please give a value for first line second columsn\n"<< endl;
    //cin >> arr[1][2];
    //cout << "value : " << arr[1][2];
    
    for (int i = 0 ; i< 2; i++){
            for(int j = 0; j < 3; j++){
                    cout <<  arr[i][j] << " " << endl;
                }
        }
    
     
    cout << endl;
    return 0;
    
    }
