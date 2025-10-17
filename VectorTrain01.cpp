#include <iostream>
#include <vector>
#include <string>
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
    
    
// Template class
//Temlate is doing this this is ý want ýa want to T type of value and N is my value ,
// function <T, n>(Value)
template <class T, int N>
T fixed_multiply(T val)
{
    return val * N;    
}
        
    
int main() {
    
    
    
    cout << fixed_multiply<int , 2>(10) << '\n';
    cout << fixed_multiply<float, 3>(10.005) << '\n';
    
   /* 
    if (are_equal(10, 10.0))
      cout << "x and y are equal \n" ;
    else
      cout << "x and y are not equal \n";
        */
    
    // First triying boolalpha alg.
    /*
    
    cout << boolalpha; // write with true false
    
    cout << are_equal(10,10.0) << endl;
    cout << are_equal(10,19.0) << endl;
    cout << are_equal('A',65) << endl;
    cout << are_equal(string("hi"), "hi") << endl;
    cout << are_equal(3.14,3) << endl;
    */
    
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
