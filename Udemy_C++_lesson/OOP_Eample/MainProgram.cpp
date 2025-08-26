#include <iostream>
#include "Otomobil.h"
using namespace std;




int main(){
   
    Otomobil otomobil1("siyah", "audi", 200);
    
    otomobil1.setOtomobilRenk("beyaz"); // Private define test look at the Otomobil.h...
    
    Otomobil otomobil2("Mavi", "opel", 100);
    otomobil2.setOtomobilModel("wolksvagen");
    
    
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
    otomobil2.PapersInfo();
    cout << otomobil1.getOtomobilRenk() << " " ;
    cout << otomobil1.getOtomobilModel() << " ";
    cout << otomobil1.getOtomobilHp();
    cout << otomobil2.model ;
    */
    
    
    // pointer with classes
    
    
    Otomobil* p;
    p = &otomobil1;
    p->PapersInfo();
    p = &otomobil2;
    p->PapersInfo();
    
    p = new Otomobil("yellow", "BmW", 200);
    p->PapersInfo();
    // """DESTRUCTORS (C++ only)"""
    // destructor are usually used to
    // deallocate memory and do other cleanup for a classes object and its class members when the object is destroyed.
    // A destuctor is called for a class object when that object passes out of scope or is explicitly deleted.
    delete p; // if you down wiht pointers you have to delete to it , because its gone be a bug alright...
    
    
    
    
    cout << endl;
    return 0;    
}
