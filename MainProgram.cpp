#include <iostream>
#include "Otomobil.h"

using namespace std;

int main() {
    Otomobil otomobil1("black", "Renault", 90);
    Otomobil otomobil2("white", "opel", 100);

    
    otomobil1.ShowRegistrationInformation();
    cout << endl << endl;
    otomobil2.ShowRegistrationInformation();

    cout << endl;
    return 0;
}

