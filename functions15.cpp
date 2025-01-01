#include <iostream>

using namespace std;

//declating a function


void greet(){
    
    cout << "HEllo there ";
    
}

void printNum(int num) {
  cout << num;   
}

int main() {
    
    // calling the function
    
    int n = 7;
    
    
    printNum(n);
    
    greet();
    
    
    return 0;
    
    
}
