#include <iostream>
#include <iostream>

using namespace std;



struct Student{
    
    int student_no;
    string name;
    double  PointScore;
};

/// just one object processing...
void StudentStatsPrint(Student stude)
{
    
    if(stude.PointScore < 50)
    {
        cout<< " what is this bro wtf" << endl;    
    }
    else {
        
            cout << " congrutaliaons "<< endl;
        }

    
}
// for the all student print stats ...

void AllStudentsPrint(Student students[], int size){
      
    cout << "\n students Stats \n" ;
    for(int i = 0 ; i < 3; i++){
        cout << students[i].student_no << "  " <<
                students[i].name << "  " << 
                students[i].PointScore << "  ";
        StudentStatsPrint(students[i]);
    }

}



int main(){
    
    
    int n;
    
    cout << "How many students must be saved ? ";
    cin >> n;
    cin.ignore();
    
    Student *students = new Student[n];
    
    for(int i = 0; i < n; i++)
    {
        
        cout << i + 1 << ".student_no: ";
        cin >> students[i].student_no;
        cin.ignore();
        cout << "Name: ";
        getline(cin, students[i].name);
        
        cout << "Point score: ";
        cin >> students[i].PointScore;
                
    }
    
    cout << "\n Students List: \n";
    for(int i = 0; i < n; i++)
    {
        cout << i <<  " : " <<  students[i].student_no  << "   "  << students[i].name << " " << students[i].PointScore << "\n" << endl;  
        
    }
    
    delete[] students;
    return 0;
    
    
    /*
    Student* ptr = new Student;
    
    cout << "Student no: " ;
    cin >> ptr->student_no;
    cin.ignore();
    
    cout << "Name: ";
    getline(cin, ptr->name);
    
    cout << "Point score: ";
    cin >> ptr->PointScore;
    
    cout << ptr-> student_no << " " << ptr->name << " " << ptr->PointScore << endl;
    
    delete ptr;
    
    
    return 0;*/
    //Student students[3];
    
    
    /*
    
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
    */
    
    
    /*
    student.student_no = 303;
    student.name = "Bedirhan Aydin";
    student.PointScore = 3.00;
    
    cout << student.student_no << " " << student.name  << " " << student.PointScore << "\n"  ;
    
    
    Student student1 = {302, "Onur Tanis", 3.50};
    
    cout << student1.student_no << " " << student1.name << " " << student.PointScore << endl;*/
    /*
    
    Student Students[3] = {
        {101, "Bedirhan Aydin", 05},
        {102, "John Tress", 60},
        {103, "Terry Davis", 100},
    };
    
    AllStudentsPrint(Students, 3);*/
    
}
