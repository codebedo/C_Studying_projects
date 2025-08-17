#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    
    vector<string> kelimeler = {"flying", "flower","flee"};
    
    for (auto &k: kelimeler) {
            cout << k << endl;
        }
    
    
    return 0 ;
    }
