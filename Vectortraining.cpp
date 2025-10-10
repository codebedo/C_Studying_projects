#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    
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
    
    
    return 0;
}
