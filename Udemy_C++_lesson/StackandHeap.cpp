#include <iostream>

using namespace std;



void Food(){
    
    int x = 10;
    cout << "x : " << x << endl;
    }



void bar() {
        int* p = new int(20);
        cout<< "p memory reference value: " << *p << endl;
        
    }
int main(){
    
    
    Food();
    bar();
    
    cout << endl;
    return 0;    
}
