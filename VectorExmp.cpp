
// Vector funcktions examples
#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
    
    std::vector<int> myvector;
    
    myvector.push_back(10);
    
    while(myvector.back() != 0)
    {
        myvector.push_back(myvector.back() -1);    
    }
    
    std::cout << "myvector contains: ";
    for(unsigned i=0; i<myvector.size(); i++)
        std::cout << ' ' << myvector[i];
    std::cout<< '\n' ;
    
    return 0;*/
    
    // vector method examples 2
    /*
    
    //initalizer list
    vector<int> vector1 = {1,2,3,4,5};
    
    // uniform initialization
    vector<int> vector2{6,7,8,9,10};
    cout << "vector = ";
    
    //method 3
    vector<int> vector3(5,12);
    //ranged loop
    for(const int& i : vector1){
        cout << i << " ";
    }
    
    
    cout<< "\nvector2 = ";
    
    //ranged loop
    
    for(const int& i : vector2) {
        
        cout << i << " ";    
    }
    
    cout << "\nvector3 = ";
    
    for(const int& i : vector3){
        cout << i << " " ;
            
    }
    
    ********* example 2 ending *********/
    
    
    /*******Example 3 Starting ***********/
    
    
    vector<int> num{1,2,3,4,5};
    
    cout << "Initial Vector: ";
    
    for(const int& i : num) {
        cout << i << " ";    
    }
    
    // add the integers 6 and 7 to the vector
    num.push_back(6);
    num.push_back(7);
    
    
    cout << "\nUpdated Vector: ";
    
    
    for(const int& i : num) {
        
        cout << i << " ";    
    }    
    
    
    vector<int> num1{1,2,3,47,8,74};
    
    cout << "\nInitial Vector: ";
    for(const int& i : num1) {
        cout << i << " " ;    
    }
    
    // add the integers 10  and 11 to the vector
    
    num1.push_back(10);
    num1.push_back(11);
    
    
    cout << "\nUpdated Vector: ";
    
    for(const int& i : num1){
        
        cout << i << " " ;    
    }
    

    
    return 0;
    
}
