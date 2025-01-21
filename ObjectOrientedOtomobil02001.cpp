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
