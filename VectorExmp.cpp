
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
    
    
    /*******Example 3 Starting **********
    
    
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
    
    vector<int> num2{12,32,25,65,48};
    
    cout << "\nInitial vector";
    
    for(const int& i : num2){
        
        cout << i << " " ;    
    }
    
    // add elements 78,98
    
    num2.push_back(78);
    num2.push_back(98);
    
    cout << "\nUpdated vector " ;
    
    for(const int& i : num2){
        
        cout << i << " " ;    
    }
    /*******Example 3 Ending ***********/
    /*******Example 4 starting**********
    
    vector<int> num{1,2,3,4,5};
    
    cout << "Element index 0 : " << num.at(0) << endl;
    cout << "Element index 1 : " << num.at(1) << endl;
    cout << "Element index 2 : " << num.at(2) << endl;
    cout << "Element index 3 : " << num.at(3) << endl;
    cout << "Element index 4 : " << num.at(4) << endl;
    /*******Example 4 ending**********/
    
    /******Example 5 starting*********
    
    vector<int> num {1,2,3,4,5,8,9};
    
    cout << "\nInýtial vector";
    
    for(const int& i : num ){
        
        cout << i << " " ;    
    }
    
    
    // change elements to 20 and 25
    
    num.at(5) = 20;
    num.at(6) = 25;
    
    cout << "\nUpdated vector";
    
    for(const int& i : num){
        
        cout << i << " " ;    
    }
    

    vector<int> num1{1,2,3,4,5,78,90};
    
    cout << "\nInitial vector " ;
    
    for(const int& i : num1){
        
        cout << i << " " ;
            
    }
    
    
    // adding and changed elements 
    
    num1.at(2) = 45;
    num1.push_back(54);
    
    
    cout << "\nUpdated vector" ;
    
    for(const int& i : num1){
        
        cout << i << " " ;    
    }    
    
    
    /******Example 5 Ending*********/
    
    
    
    /******Example 6 starting********
    
    vector<int> myvector;
    
    myvector.push_back(10);
    
    cout << "\nInitial vector " ;
    for(const int& i : myvector){
            cout << i << "  " ;
        }
    while(myvector.back() != 0)
    {
        myvector.push_back(myvector.back() -2);
    }
    
    
    cout << "\nmyvector contains: ";
    for(const int& i : myvector){
        cout << i << " " ;
    }
    cout << "\n " ;
    /******Example 6 Ending*********/

    
    return 0;
    
}
