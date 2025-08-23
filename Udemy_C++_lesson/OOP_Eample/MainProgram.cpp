#include <iostream>
#include "Otomobil.h"
using namespace std;




int main(){
   
    Otomobil otomobil1("siyah", "audi", 200);
    
    otomobil1.setOtomobilRenk("beyaz"); // Private define test look at the Otomobil.h...
    
    Otomobil otomobil2("Mavi", "opel", 100);
    otomobil2.model = "Reanult" ;
    
    /*
    otomobil1.renk = "black";
    otomobil1.model = "audi";
    otomobil1.hp = 200;
    
    otomobil2.renk = "White";
    otomobil2.model = "renault";
    otomobil2.hp = 100 ;
    */
    /*
    otomobil1.PapersInfo();
    cout << endl << endl;
    otomobil2.PapersInfo();*/
    
    
    cout << otomobil1.getOtomobilRenk() << " " ;
    cout << otomobil1.getOtomobilModel() << " ";
    cout << otomobil1.getOtomobilHp();
    cout << otomobil2.model ;
    
    
    
    
    cout << endl;
    return 0;    
}
