#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <memory>

using std::cout;
using std::endl;


int main(){
    
        std::uint32_t array[10];
        
        auto sizeOfInt = sizeof(std::uint32_t); // 4
        auto numOfBytes = sizeof(array); // 10*sizeOfInt = 40
        auto sizeOfElement = sizeof(array[0]);//sizeofInt = 4
        auto numOfElements = sizeof(array) / sizeof(array[0]); //numOfBytes / sizeofElement = 40 / 4 = 40
        
        
        cout<< "sizeOfInt: " << sizeOfInt << endl;
        cout << "numOfBytes " << numOfBytes << endl;
        cout << "SizeOfElement " << sizeOfElement << endl;
        cout << "numOfElements " << numOfElements << endl;  
    
    
    }
