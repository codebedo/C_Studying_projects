#pragma once
#include <iostream>

using namespace std;


class Otomobil {;
public:        
    void RegistrationInfo();
    Otomobil(String _colour, int _HorsePower, string _model);
    void setModelYear(int _my);
    int getModelYear();
    void setOtomobilColour(string _colour);
    string getOtomobilColour();
    void setOtomobilHorsePower(int _HorsePower);
    int getOtomobilHorsePower();
    void set
      

private:
    string colour;
    int HorsePower;
    string model;
    
    
};
