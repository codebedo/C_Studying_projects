#include <iostream>

using namespace std;

int addition(int a, int b)
{
    
    int r ;
    r = a + b;
    
    return r;   
}

int Cancel(int total, int canceled){
    
    int t ;
    t = total - canceled;
    
    return t;
}

int main(){
    
    int z;
    z = addition(5,3);
    cout << "The result is " << z ;
    
   
    
    int subtotal;
    
    subtotal = Cancel(addition(5,3), 3);
    
    cout << "The subtotal is " << subtotal;
}
