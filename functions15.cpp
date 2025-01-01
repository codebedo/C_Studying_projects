#include <iostream>

using namespace std;

//declating a function


void greet(){
    
    cout << "HEllo there ";
    
}

void printNum(int num) {
  cout << num;   
}

void displayNum(int n1, float n2){
    cout << "THe int number is " << n1;
    cout << "THe double number is " << n2;
    
}
int main() {
    
    // calling the function
    
    int n = 7;
    
    int num1 = 5;
    int num2 = 5.5;
    
    displayNum(num1,num2);
    
    
    printNum(n);
    
    greet();
    
    
    return 0;
    
    
}
