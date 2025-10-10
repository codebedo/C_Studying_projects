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
/*

    vector<int>v;
    
    // Check if the vector is empty
    
    if(v.empty()){
        cout << "Vector is empty" <<endl;    
    }
    
    
    //add an element
    v.push_back(100);
    if(!v.empty()){
        
        cout << "vector is not empty. first element " << v[0] << endl;    
    }*/
    
    
    vector<vector<int>>matrix = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    
    
    cout << "Travesing 2D vector using index-based loop:\n";
    
    // Traversing usign index-based for loop
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0 ; j<matrix[i].size(); j++){
                cout << matrix[i][j] << " " ;
            }
            
            cout << endl;
    }

    return 0;
}
