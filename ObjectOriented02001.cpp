
#include <iostream>
#include "ObjectOrientedHeader02001.h"


using namespace std;





int main(){
    
    
    
    
    Otomobil  otomobil1("black", 90, "Renault");
    
    otomobil1.setOtomobilColour("Beyaz");
    
    Otomobil  otomobil2("white", 120, "Audi");
    otomobil2.setMy(2020);
    
    
    
    
    
    otomobil1.RegistrationInfo();
    cout << endl << endl;
    otomobil2.RegistrationInfo();
    
    
    
    cout << endl ;
    
    cout << otomobil1.getOtomobilColour();
    
    return 0;
    
}
