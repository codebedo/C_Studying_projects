#include <iostream>

using namespace std;


int main(){
    
    int x = 101;
    int y = x;
    int reversed = 0;
    
    
    while(y > 0){
        reversed = reversed * 10 + y%10;
        y = y / 10;
    }
    
    
    
    cout << reversed << endl;
    
    if(reversed == x)
        cout<< x << " eşittir" << reversed << "e" << endl;
    else
        cout << "palindrome dgil" << endl;
    
        
    
    
    
    
    }
