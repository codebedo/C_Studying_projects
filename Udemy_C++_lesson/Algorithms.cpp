#include <iostream>
using namespace std;


int main(){
    
    string a = "Please enter an integer number ";
    int b = 0 ;
    
    cout << a << endl ;
    cin >> b ;
    cout << b << endl;
    
    for( int i = 1 ; i <= b; i++){
            
        
            if( !(i % 2 == 0)){
                cout << i << endl;
                    
            }
        }
    
    


    cout<<endl;
    return 0;
}
