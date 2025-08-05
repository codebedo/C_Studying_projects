#include <iostream>
using namespace std;

void CallByReference(int& value){
    value  = value * 2;
    
    cout << value << endl;  
}

void CallByValue(int value){
    // this is call bay value example 
    value = value * 2;
    
    
    cout << value << endl;
    
    
}


int main(){
    
    int num = 6;
    CallByValue(num);
    
    cout << "Num with call by value : " << num << endl;
    CallByReference(num);
    cout << "Num with call by reference : " << num << endl;
    
    
    return 0;
    
}
