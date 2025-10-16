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

void dublicate (int& a, int& b, int& c){
    
    a *= 2;
    b *= 2;
    c *= 2;    
}


int main(){
    
    int z;
    z = addition(5,3);
    cout << "The result is " << z ;
    
   
    
    int subtotal;
    
    subtotal = Cancel(addition(5,3), 3);
    
    cout << "The subtotal is " << subtotal;
    
    int x = 1, y =3 , j = 7;
    
    dublicate(x,y,j);
    cout<< "x = " << x << "y = " << y << ", j = " << j;
    return 0;
    
}


