#include <iostream>

using namespace std;



struct Student{
    
    int student_no;
    string name;
    double  PointScore;
};

int main(){
    
    Student student;
    
    student.student_no = 303;
    student.name = "Bedirhan Aydin";
    student.PointScore = 3.00;
    
    cout << student.student_no << " " << student.name  << " " << student.PointScore << "\n"  ;
    
    
    Student student1 = {302, "Onur Tanis", 3.50};
    
    cout << student1.student_no << " " << student1.name << " " << student.PointScore << endl;
    
}
