#include <iostream>
#include "Otomobil.h"

using namespace std;

int main() {
    Otomobil otomobil1, otomobil2;

    otomobil1.colour = "black";
    otomobil1.HorsePower = 90;
    otomobil1.model = "Renault";

    otomobil2.colour = "dark blue";
    otomobil2.HorsePower = 140;
    otomobil2.model = "Passat";

    otomobil1.ShowRegistrationInformation();
    cout << endl << endl;
    otomobil2.ShowRegistrationInformation();

    cout << endl;
    return 0;
}

