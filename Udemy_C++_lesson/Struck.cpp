#include <iostream>

using namespace std; 

struct Point{
    // Memners 
    int x; 
    int y;
          
    
};

struct Rectangle {
    int width;
    int height;
    

};
int main(){
    
    Point pt;
    pt.x = 10;
    pt.y = 20;
    
    Point pt2;
    pt2.x = 40;
    pt2.y = 60;   
    
    Rectangle rect1;
    rect1.width = 70;
    rect1.height = 40;
    cout << "x: " << pt.x << "y: " << pt.y <<  "\n" << endl;
    cout << "x: " << pt2.x << "y: " << pt2.y << "\n" << endl;
    cout << "width: " << rect1.width << "height: " << rect1.height << endl;
    
    return 0;
    
}
