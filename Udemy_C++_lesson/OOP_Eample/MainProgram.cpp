#include <iostream>
#include "Otomobil.h"
using namespace std;




int main(){
   
    Otomobil otomobil1, otomobil2;
    
    
    otomobil1.renk = "black";
    otomobil1.model = "audi";
    otomobil1.hp = 200;
    
    otomobil2.renk = "White";
    otomobil2.model = "renault";
    otomobil2.hp = 100 ;
    
    
    otomobil1.PapersInfo();
    cout << endl << endl;
    otomobil2.PapersInfo();
    
    
    cout << endl;
    return 0;    
}
