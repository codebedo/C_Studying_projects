#include <iostream>

using namespace std;





void fonksiyon1(){
    
    static int sayac = 0;
    sayac++;
    cout<< "fonksiyon sayac: " << sayac << endl;   
}
void fonksiyon2(){
    int sayac = 0;
    sayac++;
    cout<< "fonksiyon sayac: " << sayac << endl;    
    
}
int main(){
    
    
    fonksiyon1();
    fonksiyon1();
    fonksiyon2();
    fonksiyon2();    
    return 0;
    
}
