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
    // Char example 
    
    vector<char> v = {'a', 'f', 'd'};
    
    // Inserting 'z' at the back
    v.push_back('z');
    
    // Inserting 'c' at index 1
    v.insert(v.begin() + 1, 'c');
    
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
