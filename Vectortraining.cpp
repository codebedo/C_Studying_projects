#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    /*
    
    //Declares an empty vector
    vector<int> v1;
    
    
    //Declares vector with given size
    //And fills it with a value
    vector<int> v2(3, 5);
    
    
    // Print items of v2
    
    for(int x : v2){
        cout << x << " " ;
            
    }    
    
    
    cout << endl;
    
    //initalizes vector usign
    //initializer list.
    vector<int> v3 = {1,2,3};
    
    //print items of v3
    
    for(int x : v3) {
        cout << x << " " ;    
        
    }
    */
    
    /*
    // Char example 
    
    vector<char> v = {'a', 'f', 'd'};
    
    // Inserting 'z' at the back
    v.push_back('z');
    
    // Inserting 'c' at index 1
    v.insert(v.begin() + 1, 'c');
    
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
    
    */
    
    
    /*
    
    vector<int> v = {10, 20, 30, 40};
    
    // Accessing using operator[]
    
    cout << " Element at index 2 using []: " << v[2] << endl;
    
    // Accessing using at()
    
    cout << " Element at index 3 using at(): " << v.at(3) << endl;
    
    // Uncommenting the next line will throw an
    // out_of_range_exception
    // cout v.at(10)<<endl;
    
    return 0;*/
    /*
    vector<int> v = {10, 20, 30};
    cout << "Original vlue at index 1: " << v[1] << endl;
    
    // updating the element at index q
    v[1] = 50;
    
    cout << "Updated value at index 1: " << v[1] << endl;
    
    
    return 0;*/
    /*
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};
    
    // finding size
    cout << v.size();
    */
    
    vector<char> v = {'a', 'c','f', 'd', 'z'};
    
    // Travering vector using range based for loop
    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
     
        
    return 0;
    
    
}
