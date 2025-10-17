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
    
    cl_Vector.erase(cl_Vector.end() -1, cl_Vector.end());
    cout << "\n" ;
    
    for(const int& i : cl_Vector)
    {
        cout << i << " " ;
    }
    
    
}

int main() {
    
        
        int Value ;
        int Steep;
        
        
        cout << "What is the vector step ";
        cin >> Steep ;
        cout<< "What is the value of vector " ;
        cin>> Value;
        
        callByVector(Steep, Value); 
        
        
}
