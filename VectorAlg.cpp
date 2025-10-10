#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    /*
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};
    
    // Deleting last element 'z'
    v.pop_back();
    
    
    // Deleting element 'f'
    v.erase(find(v.begin(), v.end(), 'f'));
    
    
    for(int i = 0; i < v.size(); i++) {
        cout<< v[i] << " " ;
            
    }
*/

    vector<int>v;
    
    // Check if the vector is empty
    
    if(v.empty()){
        cout << "Vector is empty" <<endl;    
    }
    
    
    //add an element
    v.push_back(100);
    if(!v.empty()){
        
        cout << "vector is not empty. first element " << v[0] << endl;    
    }
    return 0;
}
