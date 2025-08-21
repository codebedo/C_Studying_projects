#include <iostream>
#include "Otomobil.h"
// Otomobil Consturacter
Otomobil::Otomobil(string _renk,string _model , int _hp){
    renk = _renk;
    model = _model;
    hp = _hp;

}

void Otomobil::PapersInfo(){
    cout <<" Renk:  " << Otomobil::renk << endl;
    cout <<" Model:  "<< Otomobil::model << endl;
    cout <<"Beygir G : " << Otomobil::hp << endl;    
    
}

void Otomobil::setOtomobilRenk(string _renk){
    renk = _renk;    
}

string Otomobil::getOtomobilRenk(){
    return renk;    
    
}
