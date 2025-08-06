#include <iostream>
#include <iostream>

using namespace std;



struct Student{
    
    int student_no;
    string name;
    double  PointScore;
};

int main(){
    
    Student students[3];
    
    
    for(int i = 0; i < 3; i++){
        
            cout<< i + 1 << ".student's no : ";
            cin >> students[i].student_no;
            cin.ignore(); // for the clean up the new line 
            cout << i + 1 << ".students name: ";
            getline(cin, students[i].name);
            cout << i + 1 << ".students score: ";
            cin >> students[i].PointScore;
            
            
        }
    
    
    
    for(int i = 0; i < 3; i++){
            cout << students[i].student_no << " " << students[i].name << " " << 
            students[i].PointScore << endl;
        }
    
    
    
    /*
    student.student_no = 303;
    student.name = "Bedirhan Aydin";
    student.PointScore = 3.00;
    
    cout << student.student_no << " " << student.name  << " " << student.PointScore << "\n"  ;
    
    
    Student student1 = {302, "Onur Tanis", 3.50};
    
    cout << student1.student_no << " " << student1.name << " " << student.PointScore << endl;*/
    
}
