#include <iostream>
using namespace std;


bool isPrime(int number){
       if(numbeer <= 1)
            return false;    
            
    
        for(int i = 2; i * i <=number; i++){
            if(number % i == 0)
                return false;
            
        }    
            
        return true;
}


int main(){
    
    int limit;
    cout << "please enter a number" ;
    cin >> limit;
    
    
    cout << "\n prime number    multiplation  tabel : \n\n";
    
    for(int i = 2; i <= limit; i++){
            if(isPrime(i)){
                for(int j = 2; j <= limit; j++){
                    if(isPrime(j)){
                            cout<< i<< " x " << j << " = " << (i * j) << "\t"; 
                        }
                    
                }
                
                cout << endl; 
            }
        }
        
        return 0;
}
