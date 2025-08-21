#pragma once
#include <iostream>
#include <string>
using namespace std;



class Otomobil {
public:/*
    string renk;
    string model;
    int hp;*/
    
    
    void PapersInfo();
    // Constructer functions
    Otomobil(string _renk,string _model , int _hp);
    void setModelYear(int _my);
    int getModelYaar();
    void setOtomobilRenk(string _renk);
    void getOtomobilRenk();
// Private Tests

private:
     string renk;
     string model;
     int hp;
};
