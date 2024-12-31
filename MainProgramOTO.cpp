#include <iostream>


using namespace std;


class Otomobil {
    public:
        string renk;
};



        



int main(){
    
    
    Otomobil otomobil1;
    Otomobil otomobil2;
    Otomobil otomobil3;
    
    
    otomobil1.renk = "black";
    otomobil2.renk = "white";
    otomobil3.renk = "Pink" ;
    
    cout << "Otomobil 1: " << otomobil1.renk << endl;
    cout << "Otomobil 2: " << otomobil2.renk << endl;
    cout << "Otomobil 3: " << otomobil3.renk << endl;
    
    
    
    
    cout << endl;
    
    return 0;
    
    
}
