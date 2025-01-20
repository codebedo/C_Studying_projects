
#include <iostream>

using namespace std;


class Otomobil{
    
    public:
        
        string colour;
        
        
};



int main(){
    
    
    Otomobil otomobil1;
    Otomobil otomobil2, otomobil3;
    
    otomobil1.colour = "black";
    otomobil2.colour = "white";
    otomobil3.colour = "blue";
    
    
    
    cout << "Car colour : " << otomobil1.colour << endl;
    cout << "Car colour : " << otomobil2.colour << endl;
    cout << "Car colour : " << otomobil3.colour << endl;
    
    
    cout << endl ;
    
    return 0;
    
}
