#include <iostream>

using namespace std;

int divide(int a , int b) {
    
    int r;
    r = a/ b;
    
    return(r);
        
}
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
    cout << "\n";
    dublicate(x,y,j);
    cout<< "x = " << x << "y = " << y << ", j = " << j;
    
    cout << "\n";

    
    int dv1;
    
    cout << "if you want to divide please entered ";
    cin >> dv1;

    int lastTotal;
    lastTotal = divide(addition(5,3), dv1);
    
    cout << "\n dived total per pay : is " << lastTotal ;
    return 0;
}


