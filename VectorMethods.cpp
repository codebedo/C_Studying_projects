#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> num(10);
    
    
    for(unsigned i = 0; i < num.size() ; i++)
    {
        num.at(i) = i;    
    }    
    
    
    
    for(const int& i : num ) {
        
        cout << i << " " ;    
    }
}
