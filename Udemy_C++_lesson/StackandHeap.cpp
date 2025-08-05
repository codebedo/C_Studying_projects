#include <iostream>

using namespace std;



void Food(){
    
    int x = 10;
    cout << "x : " << x << endl;
    }



void bar() {
        int* p = new int(20);
        cout<< "p memory reference value: " << p << *p << endl;
        delete p ;
        
        
        cout << *p << endl;
        
    }
int main(){
    
    
    int x, y;
    int z = 10;
    int* p = new int(5);
    delete p;
    
    int w = 20;
    p = &w;
    cout << *p << endl;
    
    
    
    cout << endl;
    return 0;    
}
