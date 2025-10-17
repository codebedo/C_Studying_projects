#include <iostream>
#include <vector>
using namespace std;
int callByVector(int a, int b) {
    
    vector<int> cl_Vector;
    
    cl_Vector.assign(a, b);
    
    
    for(const int& i : cl_Vector)
    {
        cout << i << " " ;    
    }
}

int main() {
    
        
        int value ;
        int Steep;
        
        
        cout << "What is the vector value ";
        cin >> value ;
        cout<< "What is the steep of vector " ;
        cin>> Steep;
        
        callByVector(value, Steep); 
}
