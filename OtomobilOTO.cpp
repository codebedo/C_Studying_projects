#include <iostream>
#include "Otomobil.h"
    // Otomobil constructer
    Otomobil::Otomobil(string _colour, string _model, int _HorsePower) {
         colour = _colour;
         model = _model;
         HorsePower = _HorsePower;
         
    }    
        
        


void Otomobil::ShowRegistrationInformation() {
	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::colour << endl;
	cout << "Beygir G: " << Otomobil::HorsePower << endl;
}
