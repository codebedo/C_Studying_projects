
#include <iostream>
#include "ObjectOrientedHeader02001.h"


using namespace std;





int main(){
    
    
    
    
    Otomobil  otomobil1("black", 90, "Renault");
    
    
    
    otomobil2.colour = "white";
    otomobil2.HorsePower = 120;
    otomobil2.model = "Audi";
    
    otomobil1.RegistrationInfo();
    cout << endl << endl;
    otomobil2.RegistrationInfo();
    
    cout << endl ;
    
    return 0;
    
}
