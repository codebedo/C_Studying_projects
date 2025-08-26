#include <iostream>
#include "Otomobil.h"
// Otomobil Consturactor
Otomobil::Otomobil(string _renk,string _model , int _hp, int dc){
    cout << "constructor has been called" << endl;
    renk = _renk;
    model = _model;
    hp = _hp;
    pDoorCount = new int(dc);  // *pDoorCount = dc; same thing...

}
// """DESTRUCTORS (C++ only)"""
    // destructor are usually used to
    // deallocate memory and do other cleanup for a classes object and its class members when the object is destroyed.
    // A destuctor is called for a class object when that object passes out of scope or is explicitly deleted.
// Otomobil Destructor
Otomobil::~Otomobil(){
    // if we want to which one is called just typing model...
    cout << Otomobil::model<< "  " << "Destructor has been called" << endl;
    delete pDoorCount;
    
}
void Otomobil::PapersInfo(){
    cout <<" Renk:  " << Otomobil::renk << endl;
    cout <<" Model:  "<< Otomobil::model << endl;
    cout <<"Beygir G : " << Otomobil::hp << endl;    
    cout <<"Door count : " << *(Otomobil::pDoorCount) << endl;
    
}

void Otomobil::setOtomobilRenk(string _renk){
    renk = _renk;    
}

string Otomobil::getOtomobilRenk(){
    return renk;    
    
}


void Otomobil::setOtomobilModel(string _model){
    model = _model;
        
}

string Otomobil::getOtomobilModel(){
    return model;
}

void Otomobil::setOtomobilHp(int _hp){
    hp = _hp;
}

int Otomobil::getOtomobilHp(){
    return hp;
}
