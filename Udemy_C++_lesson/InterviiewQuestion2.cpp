#include <iostream>

using namespace std;



int main() {
    
    

    int a = 20;
    int c = 40;
    
    for( int i = a ; i <= c ; i++){
            cout << i << ". \n";
        for(int j = 1 ; j <= i; j++){
                
                
                if( i % j == 0)
                    cout << j << "  " << endl;
                
            }
            cout << endl;
            
        
        
        }   
        
        return 0; 
    
}
