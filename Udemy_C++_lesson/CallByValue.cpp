#include <iostream>
using namespace std;

void changes(int value){
    
    value = value * 2;
    
    
    cout << value << endl;
    
    
}


int main(){
    
    int num = 6;
    changes(num);
    cout << "Num : " << num << endl;
    return 0;
    
}
