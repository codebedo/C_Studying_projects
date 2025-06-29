#include <iostream>
#include <unordered_map>

using namespace std;


int main(){
    
    // define hasmap
    unordered_map<string, int> myMap;
    
    
    myMap["elma"] = 5;
    myMap["muz"] = 3;
    myMap["portakal"] = 7;
    
    
    
    // single write
    
    for(auto pair : myMap) {
        cout << pair.first << ":" << pair.second << endl;
    }
    
    
    // belirlir bir anahtar� sorgulama 
    cout << "Muz adedi: " << myMap["muz"] << endl;
    
    
    // Anahtar var m� kontrol�
    if(myMap.find("kivi") == myMap.end()){
        cout << "Kivi bulunamad�." << endl;
    }
    
    return 0;
}
