#pragma once
#include <iostream>
#include <string>
using namespace std;



class Otomobil {
public:/*
    string renk;
    string model;
    int hp;*/
    
    // Constructer functions
    Otomobil(string _renk,string _model , int _hp, int dc);
    // """DESTRUCTORS (C++ only)"""
    // destructor are usually used to
    // deallocate memory and do other cleanup for a classes object and its class members when the object is destroyed.
    // A destuctor is called for a class object when that object passes out of scope or is explicitly deleted.
    ~Otomobil();
    void PapersInfo();
    void setOtomobilModel(string _model);
    string getOtomobilModel();
    void setOtomobilRenk(string _renk);
    string getOtomobilRenk();
    void setOtomobilHp(int _hp);
    int getOtomobilHp();
    
    int *pDoorCount;
    
// Private Tests

private:
     string renk;
     string model;
     int hp;
};
