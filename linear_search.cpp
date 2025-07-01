#include <iostream>

using namespace std;

int linear_searc(int *arr, int n, int key){
    for(int i = 0;i < n ; i++)
        
        if(arr[i] == key)
            return i ;
        
    return -1;
    
}


int main(){
    
    int arr[] = {2,3,5,3,212,34,54};
    // numofbites / sizeofelement = 42 / 6 = 7
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 34;
    
    
    int res = linear_searc(arr , n ,key);
    
    if(res != -1) 
        cout <<key<< "found at index " << res<< endl;
    else
        cout << key<< "not found"<< endl;
}
