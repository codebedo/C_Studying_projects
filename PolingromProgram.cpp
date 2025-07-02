#include <iostream>

using namespace std;

int main(int argc, const char* argv[]){
    
    printf("bir sayi giriniz: ");   
    
    
    int sayi;
        std:: cin >> sayi;
            
            while(sayi > 0) {
                std::cout << sayi%10 <<std::endl;
                
                
                
                sayi = sayi/10;
        
        }
    
    return 0;
    
}
