#include <iostream>
using namespace std;



void changeToArray(int arr[], int size){
    for(int i = 0; i <size; i++)
    {
        arr[i] = arr[i] + 1;    
    }
    
}
void ChanteTonode(int arr[], int size){
    int  i = size;
    while( i >= size) {
        i -= 1;
        cout<< arr[i] << " ";
        
    }   
}


int main(){
    
    int arrr[] = {1,2,3,4,5,6,7};
    
    changeToArray(arrr, 8);
    ChanteTonode(arrr, 8);
    
    for(int i = 0; i < 7; i++){
        cout << arrr[i] << " , " ;
    }
    
    cout<< endl;
    
    return 0;
    
    }
