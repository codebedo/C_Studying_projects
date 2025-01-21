#pragma once
#include <iostream>

using namespace std;


class Otomobil {
public:
    string colour;
    int HorsePower;
    string model;
        
    void RegistrationInfo();
    Otomobil(String _colour, int _HorsePower, string _model);
    void setModelYear(int _my);
    int getModelYear();

private:
    string colour;
    int HorsePower;
    string model;
    
    
};
