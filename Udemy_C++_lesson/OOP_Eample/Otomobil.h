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
    void setOtomobilModel(string _model);
    string getOtomobilModel();
    void setOtomobilRenk(string _renk);
    string getOtomobilRenk();
    void setOtomobilHp(int _hp);
    int getOtomobilHp();
    
// Private Tests

private:
     string renk;
     string model;
     int hp;
};
