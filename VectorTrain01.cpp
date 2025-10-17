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

// function Templates

template <class T, class U>
bool are_equal(T a, U b)
{
    return (a==b);    
}
    
        
    
int main() {
    
    
    if (are_equal(10, 10.0))
      cout << "x and y are equal \n" ;
    else
      cout << "x and y are not equal \n";
        
    return 0;
    
    /*
        
        int Value ;
        int Steep;
        
     
        cout << "What is the vector step ";
        cin >> Steep ;
        cout<< "What is the value of vector " ;
        cin>> Value;
        
        callByVector(Steep, Value); 
        */
        
}
