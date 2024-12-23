#include <iostream>
#include "Otomobil.h"



void Otomobil::ShowRegistrationInformation() {
	cout << "Model: " << Otomobil::model << endl;
	cout << "Renk: " << Otomobil::colour << endl;
	cout << "Beygir G: " << Otomobil::HorsePower << endl;
}
