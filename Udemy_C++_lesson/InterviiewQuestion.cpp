#include <iostream>

using namespace std;


int main() {
    

    int arr[] = {1001, 1222, 1234,1587, 1111};
    
    int counter = 0;
    for(int i = 0; i <= 5 ; i++)
    {
        
        int temporary = arr[i] % 10;
        int temporaryiki = arr[i] % 00;
        
        if(!(temporary - temporaryiki == 0)) 
            counter++;
        
    } 
    
    
    cout << counter << endl;    
    
    
}
