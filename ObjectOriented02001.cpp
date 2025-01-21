
#include <iostream>
#include "ObjectOrientedHeader02001.h"


using namespace std;





int main(){
    
    
    
    
    Otomobil  otomobil1("black", 90, "Renault");
    Otomobil  otomobil2("white", 120, "Audi");
    
    
    
    
    
    otomobil1.RegistrationInfo();
    cout << endl << endl;
    otomobil2.RegistrationInfo();
    
    cout << endl ;
    
    return 0;
    
}
