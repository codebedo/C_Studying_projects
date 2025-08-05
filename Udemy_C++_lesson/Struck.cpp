#include <iostream>

using namespace std; 

struct Point{
    // Memners 
    int x; 
    int y;
          
    
};
int main(){
    
    Point pt;
    pt.x = 10;
    pt.y = 20;   
    cout << "x: " << pt.x << "y: " << pt.y << endl;
    
    return 0;
    
}
