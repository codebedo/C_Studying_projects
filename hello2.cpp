#include <iostream>

using namespace std;

int main(){
 
    int *p , a;
    
    a = 5;
    p = &a;
    
    cout << a << p << *a << *p << endl;   
}
