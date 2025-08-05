#include <iostream>

using namespace std;


int main(){
    
    
    int bolen , bolunen;
    
    
    cout << "please enter the diveding number" << endl;
    cin >> bolen ;
    
    
    cout << "please enter the dived number " << endl;
    cin >> bolunen;
    
    
    try {
        if ( bolen == 0)
            throw 99;
        int sonuc = bolunen / bolen;    
        cout << "sonuc : " << sonuc  << endl ;
        
    }
    catch(int errorKode){
            cout<<"Error kode " << errorKode  << " dividing number cannot be 0 !"<< endl;
        }
    
    
    
    
    
        
    
}
