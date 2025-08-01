#include <iostream>
using namespace std;


int main(){
    
    string a = "Please enter an integer number ";
    int b = 0 ;
    
    cout << a << endl ;
    cin >> b ;
    cout << b << endl;
    /*
    for( int i = 1 ; i <= b; i++){
            
        
            if( !(i % 2 == 0)){
                cout << i << endl;
                    
            }
        }*/
        
        
        for(int i = 1 ; i <= b ; i++){
            int counter = 0;
            for(int j = 1; j <= i; j++){
                    if(i % j == 0)
                        counter++;
                }
                
                if(counter == 2)
                    cout<< i << ", ";    
        }
    
    


    cout<<endl;
    return 0;
}
