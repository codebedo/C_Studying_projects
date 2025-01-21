#include <iostream>
#include "ObjectOrientedHeader02001.h"

//otomobil const
Otomobil::Otomobil(String _colour, int _HorsePower, string _model) {
    colour = _colour;
    HorsePower = _HorsePower;
    model = _model;
}


void Otomobil::RegistrationInfo() {
    
    cout << "Colour: " << colour << endl;
    cout << "Hp: " << HorsePower << endl;
    cout << "Model: "<< model << endl;

}


void Otomobil::setOtomobilColour(string _colour){
    colour = _colour;
    
}

string Otomobil::getOtomobilColour() {
    
    return  colour;
    
}

void Otomobil::setOtomobilHorsePower(int _HorsePower){
    HorsePower = _HorsePower;
    
}
int Otomobil::getOtomobilHorsePower(){
    return HorsePower;
    
}
void Otomobil::setOtomobilModel(string _model){
    model = _model;
}


    string getOtomobilModel();
      
