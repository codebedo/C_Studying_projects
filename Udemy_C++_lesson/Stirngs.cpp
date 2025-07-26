#include <iostream>

using namespace std;



int main(){
    
        char message[] = "hello";
        
        cout << message << endl;
        
        
        
        // count for strings length 
        
        int length = 0;
        
        
        while(message[length] != '\0')
            length++;
            
        
        
        cout << "Lenght: " << length << endl;
        
        string mystr = "hello";
        mystr.append("C++");
        cout << mystr<< endl;
        
        return 0;
    
    }
